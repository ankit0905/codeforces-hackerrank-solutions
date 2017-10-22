#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

#define ll long long int

#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);
#define all(x) (x).begin(), (x).end()

#define INF 2147483647
#define SIZE 1000004

ll mod = 1000000007;

map<ll,ll> x, y;

int main()
{
	ll x1,y1,n;
	scanf("%lld",&n);
	vector<pll> v(n);
	for(int i=0; i<n; i++){
		scanf("%lld %lld",&x1,&y1);
		v[i] = mp(x1,y1);
		if(x[x1])
			x[x1]++;
		else
			x[x1]=1;
		if(y[y1])
			y[y1]++;
		else
			y[y1]=1;
	}
	sort(v.begin(), v.end());
	ll ans = 0;
	map<ll,ll>::iterator it;
	for(it=x.begin(); it!=x.end(); it++){
		ll num = it -> second;
		ans = ans + (num*(num-1))/2;
		//cout << it -> first << " " << it -> second << endl;
	}
	//cout << endl;
	for(it=y.begin(); it!=y.end(); it++){
		ll num = it -> second;
		ans = ans + (num*(num-1))/2;
		//cout << it -> first << " " << it -> second << endl;
	}
	ll ct = 1;
	x1 = v[0].fi;
	y1 = v[0].se;
	for(int i=1; i<n; i++){
		if(v[i].fi == x1 && v[i].se == y1){
			ct++;
		}
		else{
			ans = ans - (ct*(ct-1))/2;
			x1 = v[i].fi;
			y1 = v[i].se;
			ct = 1;
		}
	}
	ans = ans - (ct*(ct-1))/2;
	printf("%lld\n",ans);
	return 0;
}
