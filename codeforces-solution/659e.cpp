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
#include <cstdlib>
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
#define MAXN 100004
 
ll mod = 1000000007;

vector<vector<int> > v(MAXN);
int vis[MAXN], par[MAXN];

int main()
{
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	for(int i=0; i<m; i++){
		scanf("%d%d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int fl, ans = 0;
	for(int i=1; i<=n; i++){
		if(vis[i])
			continue;
		queue<int> q;
		vis[i] = 1;
		q.push(i);
		fl = 0;
		while(!q.empty()){
			int node = q.front();
			q.pop();
			int sz = v[node].size();
			for(int j=0; j<sz; j++){
				//cout << node << " " << v[node][j] << " " << vis[node] << " " << vis[v[node][j]] << endl;
				if(vis[v[node][j]]){
					//cout << node << " " << v[node][j] << " " << par[v[node][j]] << endl;
				}
				if(vis[v[node][j]] == 1 && par[v[node][j]] != node && par[node] != v[node][j]){
					fl = 1;
				}
				else if(vis[v[node][j]] == 0){
					q.push(v[node][j]);
					vis[v[node][j]] = 1;
					par[v[node][j]] = node;
				}
			}
		}
		//cout << fl << endl;
		if(fl == 0){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
