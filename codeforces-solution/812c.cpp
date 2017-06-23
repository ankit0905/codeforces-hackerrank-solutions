#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <set>
#include <map>

using namespace std;

#define ll long long

#define pii pair<int,int>
#define pll pai<ll,ll>
#define mp make_pair


int main()
{	
	long long int n,s;
	cin >> n >> s;
	long long int a[n],b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}	
	long long int lo = 0, hi = n, sum;
	pair<ll, ll> p;
	p = make_pair(0,0);
	while(lo <= hi){
		long long int mid = (lo+hi)/2;
		for(int j=0; j<n; j++){
			b[j] = a[j]+(j+1)*mid;
		}
		sort(b,b+n);
		sum = 0;
		for(int j=0; j<mid; j++){
			sum = sum+b[j];
		}
		if(sum <= s){
			p.first = mid;
			p.second = sum;
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}
	cout << p.first << " " << p.second << endl;
	return 0;
}
