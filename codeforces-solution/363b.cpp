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
#define _cin ios_base::sync_with_stdio(0)
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define MAXN 100004
#define ALPHA 26 
 
ll mod = 1000000007;

int main()
{
	_cin;
	ll n,k;
	cin >> n >> k;
	ll a[n+1], sum[n+1], idx = -1, ans = 1000000000, tmp;
	sum[0] = 0;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}
	for(int i=1; i<=n-k+1; i++){
		if(idx == -1){
			ans = tmp = sum[k];
			idx = i;
		}
		else{
			tmp = tmp + a[k+i-1] - a[i-1];
			if(ans > tmp){
				tmp = ans;
				idx = i;
			}
		}
	}
	cout << idx << endl;
	return 0;
}







