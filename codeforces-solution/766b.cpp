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
	int n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	for(int i=0; i<n-2; i++){
		ll x = a[i], y = a[i+1], z = a[i+2];
		if(x+y > z && y+z > x && x+z > y){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
