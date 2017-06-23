#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
using namespace std; 

#define ll long long int

int main()
{
	int n,f;
	cin >> n >> f;
	pair<ll, ll> p[n];
	pair<ll, pair<ll,ll> > res[n];
	ll curr, next;
	for(int i=0; i<n; i++){
		ll k,l;
		cin >> k >> l;
		p[i] = make_pair(k,l);
		curr = min(k,l);
		next = min(2*k,l);
		res[i] = make_pair(curr-next,make_pair(-1*k,i));
	}
	sort(res, res+n);
	ll ans = 0, ct = 0;
	for(int i=0; i<n; i++){
		if(ct < f && p[res[i].second.second].first != 0){
			ans += min(2ll*p[res[i].second.second].first,p[res[i].second.second].second);
			ct++;
		}
		else{
			ans += min(p[res[i].second.second].first,p[res[i].second.second].second);
		}
	}
	cout << ans << endl;
	return 0;
}
