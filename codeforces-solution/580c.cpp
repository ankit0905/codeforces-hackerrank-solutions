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
#define SIZE 100004

ll mod = 1000000007;

vector<vector<int> > v(SIZE);
int arr[SIZE], m, ans = 0, level[SIZE], parent[SIZE], isLeaf[SIZE];

void dfs(int node, int par)
{
	parent[node] = par;
	if(par == -1){
		level[node] = 1;
	}
	else{
		level[node] = level[par]+1;
	}
	int sz = v[node].size(), ct = 0;
	for(int j=0; j<sz; j++){
		if(level[v[node][j]] == 0){
			ct++;
			dfs(v[node][j], node);
		}
	}
	if(ct == 0){
		isLeaf[node] = 1;
	}
}

void dfs2(int node, int par, int count)
{
	if(arr[node] == 1){
		if(count >= m){
			return;
		}
		int sz = v[node].size(), ct = 0;
		for(int j=0; j<sz; j++){
			if(v[node][j] != par){
				ct++;
				dfs2(v[node][j], node, count+1);
			}
		}
		if(ct == 0){
			ans++;
		}
	}
	else{
		int sz = v[node].size(), ct = 0;
		for(int j=0; j<sz; j++){
			if(v[node][j] != par){
				ct++;
				dfs2(v[node][j], node, 0);
			}
		}
		if(ct == 0){
			ans++;
		}
	}
}

int main()
{
	int n,u,vv;
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++){
		scanf("%d%d",&u,&vv);
		v[u].pb(vv);
		v[vv].pb(u);
	}
	dfs(1,-1);
	dfs2(1,-1,0);
	cout << ans << endl;
	return 0;
}
