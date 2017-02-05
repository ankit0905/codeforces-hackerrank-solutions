#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define ll long long int

int main()
{
	int n,l;
	cin >> n >> l;
	int a[n],a1[n],b[n],b1[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
	}
	if(n==1){
		cout << "YES" << endl;
		return 0;
	}
	for(int i=0; i<n-1; i++){
		a1[i]=a[i+1]-a[i];
		b1[i]=b[i+1]-b[i];
	}
	a1[n-1]=a[0]+(l-a[n-1]);
	b1[n-1]=b[0]+(l-b[n-1]);
	for(int i=0; i<n; i++){
		int fl = 1;
		for(int j=0; j<n; j++){
			if(a1[j]!=b1[(i+j)%n]){
				fl = 0;
				break;
			}
		}
		if(fl == 1){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
