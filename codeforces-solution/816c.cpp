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
#define MAXN 1000004
 
ll mod = 1000000007;

int main()
{
	int n,m;
	cin >> n >> m;
	int arr[n][m], row[n], col[m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0; i<n; i++){
		row[i] = arr[i][0];
		for(int j=1; j<m; j++){
			if(arr[i][j] < row[i]){
				row[i] = arr[i][j];
			}
		}
	}
	vector<pair<string,int> > v;
	for(int i=0; i<n; i++){
		for(int j=0; j<row[i]; j++){
			v.pb(mp("row",i+1));
		}
		for(int j=0; j<m; j++){
			arr[i][j] = arr[i][j] - row[i];
		}
	}
	for(int i=0; i<m; i++){
		col[i] = arr[0][i];
		for(int j=1; j<n; j++){
			if(arr[j][i] < col[i]){
				col[i] = arr[j][i];
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<col[i]; j++){
			v.pb(mp("col",i+1));
		}
		for(int j=0; j<n; j++){
			arr[j][i] = arr[j][i]-col[i];
		}
	}
	int fl = 1;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] != 0){
				fl = 0;
				break;
			}
		}
		if(fl == 0)
			break;
	}
	if(fl == 0){
		cout << -1 << endl;
	}
	else{
		int sz = v.size();
		cout << sz << endl;
		for(int i=0; i<sz; i++){
			cout << v[i].first << " " << v[i].second << endl;
		}
	}
	return 0;
}
