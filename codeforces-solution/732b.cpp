#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	int a[n],b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ct = 0;
	b[0]=a[0];
	for(int i=1; i<n; i++){
		if(b[i-1]+a[i]>=k){
			b[i]=a[i];
		}
		else{
			int diff = k-a[i]-b[i-1];
			b[i] = a[i] + diff;
			ct += diff;
		}
	}
	cout << ct << endl;
	for(int i=0; i<n; i++)
		cout << b[i] << " ";
	return 0;
}
