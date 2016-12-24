#include <iostream>
using namespace std;

int ncr(int n, int r);

int main()
{
	int n;
	cin >> n;
	char arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	int ans=0, ct=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]=='C')
				ct++;
		}
		ans+=ncr(ct,2);
		//cout << "count=" << ct << " ans=" << ans << endl;
		ct=0;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[j][i]=='C')
				ct++;
		}
		ans+=ncr(ct,2);
		//cout << "count=" << ct << " ans=" << ans << endl;
		ct=0;
	}
	cout << ans << endl;
	return 0;
}

int ncr(int n, int r)
{
	if(r==n)
		return 1;
	else if(r>n)
		return 0;
	else if(r==0)
		return 1;
	else{
		return (ncr(n-1, r-1) + ncr(n-1, r));
	}
}
