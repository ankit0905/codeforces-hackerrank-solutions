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

int main()
{
	ll n,m,node,weight,sz;
	scanf("%lld%lld",&n,&m);
	vector<vector<pll> > v(n+1);
	bool vis[n+1];
	ll dist[n+1], par[n+1];
	for(int i=0; i<=n; i++){
		vis[i] = false;
		dist[i] = 100000000000000ll;
	}
	for(int i=0; i<m; i++){
		ll a,b,w;
		scanf("%lld%lld%lld",&a,&b,&w);
		v[a].push_back(mp(w,b));
		v[b].push_back(mp(w,a));
	}
	dist[1] = 0;
	priority_queue<pll, vector<pll>, greater<pll> > q;
	q.push(mp(0,1));
	par[1] = -1;
	while(!q.empty()){
		pii p = q.top();
		q.pop();
		node = p.se;
		//cout << node << "," << dist[node] << " => ";
		if(vis[node])
			continue;
		weight = p.fi;
		vis[node] = true;
		sz = v[node].size();
		for(int j=0; j<sz; j++){
			//cout << v[node][j].fi << "," << v[node][j].se << "," << dist[v[node][j].se] << " "; 
			if(dist[node] + v[node][j].fi < dist[v[node][j].se]){
				dist[v[node][j].se] = dist[node] + v[node][j].fi;
				q.push(mp(dist[v[node][j].se], v[node][j].se));
				par[v[node][j].se] = node;
			}
			//cout << dist[v[node][j].se] << " ";
		}
		//cout << endl;
	}
	if(dist[n] >=10000000000000ll){
		cout << -1 << endl;
	}
	else{
		ll start = n;
		vector<ll> ans;
		do{
			ans.push_back(start);
			start = par[start];
		}while(start != -1);
		reverse(ans.begin(), ans.end());
		sz = ans.size();
		for(int j=0; j<sz; j++){
			node = ans[j];
			printf("%lld ",node);
		}
		cout << endl;
		//cout << dist[n] << endl;
	}
	return 0;
}
