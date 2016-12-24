#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;

typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		b[i]=0;
	}
	ll temp=0, fact=-1;
	for(int i=n-1; i>=0; i--){
		if(i==n-1){
			b[i]=a[i];
			temp=a[i];
		}
		else{
			b[i]=a[i]+temp;
			temp=a[i];
		}
	}
	for(int i=0; i<n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
    return 0;
}
