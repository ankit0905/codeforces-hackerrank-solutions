#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <set>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > v(n+1), comp(n);
	int fl[n+1];
	for(int i=0; i<=n; i++){
		fl[i] = 0;
	}
	vector<pair<int,int> > edges;
	for(int i=0; i<m; i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		edges.push_back(make_pair(a,b));
	}
	int ct = 0;
	for(int i=1; i<=n; i++){
		if(fl[i] == 1)
			continue;
		queue<int> q;
		q.push(i);
		fl[i] = 1;
		comp[ct].push_back(i);
		while(!q.empty()){
			int node = q.front();
			q.pop();
			comp[ct].push_back(node);
			int siz = v[node].size();
			for(int j=0; j<siz; j++){
				if(fl[v[node][j]] == 0){
					fl[v[node][j]] = 1;
					q.push(v[node][j]);
				}
			}
		}
		ct++;
	}
	for(int i=1; i<=n; i++)
		fl[i] = 0;
	/*for(int i=1; i<=n; i++){
		int si = v[i].size();
		cout << i << " => ";
		for(int j=0; j<si; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0; i<ct; i++){
		int si = comp[i].size();
		cout << i << " => ";
		for(int j=0; j<si; j++){
			cout << comp[i][j] << " ";
		}
		cout << endl;
	}*/
	int node, sz, snum;
	set<int> s0, s1;
	queue<pair<int, int> > q;
	for(int i=0; i<ct; i++){
		node = comp[i][0];
		q.push(make_pair(node,0));
		fl[node] = 1;
		while(!q.empty()){
			pair<int,int> ele = q.front();
			q.pop();
			node = ele.first;
			snum = ele.second;
			if(snum == 0){
				s0.insert(node);
			}
			else{
				s1.insert(node);
			}
			sz = v[node].size();
			for(int j=0; j<sz; j++){
				if(fl[v[node][j]] == 0){
					q.push(make_pair(v[node][j],1-snum));
					fl[v[node][j]] = 1;
				}
			}
		}
	}
	int fl1 = 0, fl2 = 0, flag = 1;
	for(int i=0; i<m; i++){
		int a = edges[i].first, b = edges[i].second;
		fl1 = fl2 = 0;
		if(s0.find(a) != s0.end() && s1.find(b) != s1.end()){
			continue;
		}
		else if(s0.find(b) != s0.end() && s1.find(a) != s1.end()){
			continue;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 0){
		cout << "-1" << endl;
	}
	else{
		set<int>::iterator it;
		cout << s0.size() << endl;
		for(it = s0.begin(); it != s0.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
		cout << s1.size() << endl;
		for(it = s1.begin(); it != s1.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}
