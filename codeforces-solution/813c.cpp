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

int level[200005], vis[200005], high[200005] ,par[200005];
vector<vector<int> > v(200005);
vector<vector<int> > lev(200005);

void dfs(int node, int p, int x)
{
	lev[x].push_back(node);
	par[node] = p;
	vis[node] = 1;
	level[node] = x;
	int sz = v[node].size();
	for(int i=0; i<sz; i++){
		if(vis[v[node][i]] == 0)
			dfs(v[node][i],node,x+1);
	}
}

int main()
{
	int n,x;
	cin >> n >> x;
	for(int i=0; i<n-1; i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}	
	dfs(1,-1,0);
	for(int i=n; i>=0; i--){
		int sz = lev[i].size();
		if(sz > 0){
			//cout << i << endl;
			for(int j=0; j<sz; j++){
				//cout << lev[i][j] << " " << high[lev[i][j]] << endl;
				high[lev[i][j]] = max(high[lev[i][j]],i);
				if(par[lev[i][j]] != -1)
					high[par[lev[i][j]]] = max(high[par[lev[i][j]]],high[lev[i][j]]);
				
				//cout << lev[i][j] << " " << high[lev[i][j]] << endl;
			}
			//cout << endl;
		}
	}
	int fl = 1, y = x;
	vector<int> path;
	path.push_back(y);
	while(y != 1){
		y = par[y];
		path.push_back(y);
	}
	reverse(path.begin(), path.end());
	int sz = path.size(), ct = 0, dist, st = 0, en = path.size()-1, ma, idx, num = high[x], index = -1, maxi = high[x], flag = 1;
	for(int i=0; i<sz; i++){
		dist = en-i;
		if(dist < i && high[path[i]] > maxi){
			//cout <<  path[i] << " " << high[path[i]] << endl;
			maxi = high[path[i]];
			index = i;
		}    
	}
	if(index > en){
		flag = 0;
		index = -1;
	}
	//cout << "index = " << index << " en = " << en << endl;
	//cout << st << " " << en << endl;
	while(true){
		if(fl == 1){
			dist = en-st;
			//cout << "check => " << index << " " << flag << endl;  
			if(flag == 1 && index > 0){
				en--;
				x = par[x];
				path.pop_back();
				if(index == en){
					flag = 0;
				}
			}
			else{
				sz = v[x].size();
				idx = -1;
				ma = high[x];
				for(int j=0; j<sz; j++){
					if(high[v[x][j]] >= ma && level[v[x][j]] > level[x]){
						ma = high[v[x][j]];
						idx = v[x][j];
					} 
				}
				if(idx != -1){
					path.push_back(idx);
					x = idx;
					en++;
				}
			}
			fl = 0;
			ct++;
			//cout << "node = " << path[en] << endl;
			//cout << "range = " << st << " " << en << endl;
		}
		else{
			++st;
			fl = 1;
			//cout << st << " " << en << endl;
			if(path[st] == x){
				ct++;
				break;
			}
			ct++;
		}
	}
	cout << ct << endl;
	return 0;
}
