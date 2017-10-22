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

int main()
{
	int n,m;
	cin >> n >> m;
	pii h[m];
	for(int i=0; i<m; i++){
		cin >> h[i].first >> h[i].second;
	}
	ll ans = 0;
	for(int i=0; i<m; i++){
		if(i == 0){
			ans = min(n,h[i].first+h[i].second-1);
		}
		else if(i == n-1){
			ans = max(ans, min(n, max(h[i].f	
		}
		else{
			
		}
	}
	return 0;
}
