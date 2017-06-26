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

vector<string> v(1004);
int vis[1004][1004];


int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0; i<n; i++){cin >> v[i];}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(vis[i][j] == 1 || v[i][j] == '*')
				continue;
			
		}
	}
	while(k--){
		int a,b;
		scanf("%d%d",&a,&b);
	}
	return 0;
}
