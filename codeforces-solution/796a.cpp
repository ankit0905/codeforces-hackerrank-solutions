#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <queue>
#include <set>
#include <cstdio>
#include <map>
using namespace std;

#define ll long long int

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ans = -1, mi = -1;
	for(int i=0; i<n; i++){
		if(a[i] != 0 && a[i] <= k){
			if(ans == -1){
				ans = i;
				mi = abs(m-i-1);
			}
			else if(abs(m-i-1) < mi){
				mi = abs(m-i-1);
				ans = i;
				//cout << "mi = " << mi << " " << ans << endl;
			}
		}
	}
	cout << mi*10 << endl;
	return 0;
}
