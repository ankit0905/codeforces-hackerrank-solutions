#include <iostream>
#include <cmath>
using namespace std;

int primedif(int n);
int isprime(int n);

int main()
{
	int n,m;
	cin >> n >> m;
	int num[100001];
	for(int i=0; i<100001; i++){
		num[i]=i;
		num[i]=primedif(i);
	}
	int arr[n][m], arr1[n][m], row[n], col[m], min=1000000;
	for(int i=0; i<n; i++){
		row[i]=0;
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
			int ele=arr[i][j];
			arr1[i][j]=num[ele];
			row[i]+=arr1[i][j];
			//cout << i << " " << j << " "<< arr1[i][j] << endl;
		}
		if(row[i]<min)
			min=row[i];
		if(min==0){
			cout << "0" << endl;
			return 0;
		}
	}
	for(int i=0; i<m; i++){
		col[i]=0;
		for(int j=0; j<n; j++){
			col[i]+=arr1[j][i];
		}
		if(col[i]<min)
			min=col[i];
		if(min==0){
			cout << "0" << endl;
			return 0;
		}
	}
	cout << min << endl;
	return 0;
}

int primedif(int n)
{
	int i=n;
	while(true){
		if(isprime(i))
			return (i-n);
		i++;
	}
}

int isprime(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
