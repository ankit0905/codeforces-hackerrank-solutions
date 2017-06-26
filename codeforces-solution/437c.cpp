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

int mat[1003][1003] = {0};
int tot[1003]={0}, fl[1003] = {0};

int main()
{
	int n,m;
	cin >> n >> m;
	int val[n];
	for(int i=1; i<=n; i++)cin >> val[i];
	for(int i=0; i<m; i++){
		int a,b;
		cin >> a >> b;
		mat[a][b] = mat[b][a] = 1;
		tot[a] += val[b];
		tot[b] += val[a];
	}
	int ans = 0;
	for(int i=1; i<=n; i++){
		//cout << "i = " <<  i << " " << tot[i] << endl;
	}
	while(true){
		int idx = -1, ma = -1;
		for(int i=1; i<=n; i++){
			if(fl[i] == 1)
				continue;
			if(val[i] > ma){
				ma = val[i];
				idx = i;
			}
			else if(val[i] == ma && tot[i] < tot[ma]){
				idx = i;
			}
		}
		//cout << idx << " " << ma << endl;
		if(ma == -1 || idx == -1)
			break;
		fl[idx] = 1;
		//cout << ma << " " << tot[idx] << " " << ans << endl;
		ans += tot[idx];
		for(int i=1; i<=n; i++){
			if(mat[idx][i] == 1){
				tot[i] -= val[idx];
			}
		}
	}
	cout << ans << endl;
	return 0;
}
