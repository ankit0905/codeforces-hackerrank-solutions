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
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

#define INF 2147483647
#define SIZE 5000004

ll mod = 1000000007;

int vis[105];

int main()
{
	int n,m;
	cin >> n >> m;
	vector<vector<int> > v(n+1);
	int arr[n], brr[n];
	pii deg[n];
	int ans[n][n];
	for(int i=0; i<n; i++)for(int j=0; j<n; j++)ans[i][j] = 0;
	for(int i=0; i<n; i++){deg[i].first = 0; deg[i].second = i;}
	for(int i=0; i<n; i++)cin >> arr[i];
	for(int i=0; i<n; i++)cin >> brr[i];
	for(int i=0; i<m; i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		v[a].push_back(b);
		v[b].push_back(a);
		deg[a].first++;
		deg[b].first++;
	}
	sort(deg, deg+n);
	for(int i=0; i<n; i++){
		int node = deg[i].second;
		int sz = v[node].size();
		vis[node] = 1;
		int diff = brr[node]-arr[node];
		for(int j=0; j<sz; j++){
			if(vis[v[node][j]] == 0){
				if(diff < 0){
					arr[v[node][j]] -= diff;
					ans[node][v[node][j]] = -1*diff;
					ans[node][node] = brr[node];
					arr[node] = brr[node];
					break;
				}
				else{
					ans[node][node] = arr[node];
					if(diff <= arr[v[node][j]]){
						arr[node] += diff;
						arr[v[node][j]] -= diff;
						ans[v[node][j]][v[node][j]] = arr[v[node][j]];
						ans[v[node][j]][node] = diff;
					}
					else{
						arr[node] += arr[v[node][j]];
						arr[v[node][j]] = 0;
						ans[v[node][j]][node] = arr[v[node][j]];
						ans[v[node][j]][v[node][j]] = 0;
					}
				}
				diff = brr[node]-arr[node];
				if(diff == 0){
					//ans[node][node] = brr[node];
					break;
				}
			}
		}
	}
	int fl = 1;
	for(int i=0; i<n; i++){
		if(arr[i] != brr[i]){
			fl = 0;
			break;
		}
	}
	if(fl == 0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}