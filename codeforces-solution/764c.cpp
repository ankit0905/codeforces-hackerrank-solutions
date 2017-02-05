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

vector<vector<int> > v(100005);

int level[100005];

void dfs(int node, int l)
{
	level[node] = l;
	int sz = v[node].size();
	for(int i=0; i<sz; i++){
		if(level[v[node][i]] == 0){
			dfs(v[node][i],l+1);
		} 
	}
}

int main()
{
	int n;
	cin >> n;
	int col[n+1];
	for(int i=0; i<n-1; i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		cin >> col[i];
	}
	int r1 = -1, r2 = -1;
	for(int i=1; i<=n; i++){
		int sz = v[i].size();
		for(int j=0; j<sz; j++){
			if(col[i] != col[v[i][j]]){
				r1 = i;
				r2 = v[i][j];
				break;
			}
		}
		if(r1 != -1)
			break;
	}
	if(r1 == -1){
		cout << "YES\n1\n";
	}
	else{
		int st = r1,c;
		dfs(r1,1);
		int sz = v[st].size();
		int fl;
		for(int i=0; i<sz; i++){
			queue<int> q;
			int s = v[st][i];
			q.push(s);
			c = col[s], fl=1;
			while(!q.empty()){
				int fr = q.front();
				q.pop();
				int siz = v[fr].size();
				for(int j=0; j<siz; j++){
					if(level[fr] < level[v[fr][j]]){
						q.push(v[fr][j]);
						if(col[v[fr][j]]!=c){
							fl = 0;
							break;
						}
					}
				}
				if(fl == 0)
					break;
			}
			if(fl == 0)
				break;
		}
		if(fl == 1){
			cout << "YES\n" << st << endl;
			return 0;
		}
		fl = 1;
		st = r2;
		for(int i=0; i<=n; i++){
			level[i] = 0;
		}
		//cout << st << endl;
		dfs(st,1);
		sz = v[st].size();
		for(int i=0; i<sz; i++){
			queue<int> q;
			int s = v[st][i];
			q.push(s);
			c = col[s], fl=1;
			while(!q.empty()){
				int fr = q.front();
				q.pop();
				int siz = v[fr].size();
				for(int j=0; j<siz; j++){
					if(level[fr] < level[v[fr][j]]){
						q.push(v[fr][j]);
						if(col[v[fr][j]]!=c){
							fl = 0;
							break;
						}
					}
				}
				if(fl == 0)
					break;
			}
			if(fl == 0)
				break;
		}
		if(fl == 1){
			cout << "YES\n" << st << endl;
			return 0;
		}
		cout << "NO" << endl;
	}
}
