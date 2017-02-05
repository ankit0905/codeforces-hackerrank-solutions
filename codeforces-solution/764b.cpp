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
	for(int i=0; i<n/2; i++){
		if(i%2==0){
			swap(a[i],a[n-i-1]);
		}
	}
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	return 0;
}
