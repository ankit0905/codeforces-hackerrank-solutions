#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<vector<int> > v(n+1);
	int deg[n+1], col[n+1], ma = 0, idx = -1;
	for(int i=0; i<=n; i++){
		deg[i] = col[i] = 0;
	}
	for(int i=0; i<n-1; i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		deg[a]++;
		deg[b]++;
		if(deg[a] > ma){
			ma = deg[a];
			idx = a;
		}
		if(deg[b] > ma){
			ma = deg[b];
			idx = b;
		}
	}
	cout << ma+1 << endl;
	int sz = v[idx].size(), ct = 2;
	col[idx] = 1;
	queue<pair<int,int> > q;
	for(int i=0; i<sz; i++){
		col[v[idx][i]] = ct++;
		q.push(make_pair(v[idx][i], col[idx]));
	}
	while(!q.empty()){
		pair<int,int> ele = q.front();
		q.pop();
		int node = ele.first;
		int c1 = ele.second, c2 = col[node];
		ct = 1;
		sz = v[node].size();
		for(int i=0; i<sz; i++){
			if(col[v[node][i]] == 0){
				if(ct == c1){
					ct++;
					if(ct == c2){
						ct++;
					}
				}
				if(ct == c2){
					ct++;
					if(ct == c1){
						ct++;
					}
				}
				col[v[node][i]] = ct;
				q.push(make_pair(v[node][i], c2));
				ct++;
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout << col[i] << " ";
	}
	cout << endl;
	return 0;
}
