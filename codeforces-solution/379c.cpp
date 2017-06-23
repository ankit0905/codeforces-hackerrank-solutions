#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long int

int main()
{
	int n;
	scanf("%d",&n);
	pair<ll,ll> a[n];
	map<ll,ll> mp;
	ll b[n], x;
	for(int i=0; i<n; i++){ 
		scanf("%lld",&x);
		a[i].first = x;
		a[i].second = i;
	}
	sort(a,a+n);
	ll curr = a[0].first;
	for(int i=0; i<n; i++){
		if(!mp[max(a[i].first, curr)]){
			mp[max(a[i].first,curr)] = 1;
			curr = max(a[i].first, curr)+1;
			b[a[i].second] = curr-1;
		}
		else{
			b[a[i].second] = curr;
			mp[curr] = 1;
			curr++;
		}
	}
	for(int i=0; i<n; i++){
		printf("%lld ",b[i]);
	}
	printf("\n");
	return 0;
}
// 1 1 1 1 6 7 7 8 10 10
// 1 2 3 4 6 7 8 9 10 11
// 3 5 5 5 
