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
#define MAXN 100004

ll mod = 1000000007;

ll count_[MAXN], dp[MAXN];

int main()
{
	ll n, x;
	scanf("%lld",&n);
	ll ma = -1;
	for(int i=0; i<n; i++){
		scanf("%lld",&x);
		if(x > ma)
			ma = x;
		count_[x]++;
	}
	dp[0] = 0;
	dp[1] = count_[1];
	for(ll i=2; i<=ma; i++){
		dp[i] = max(dp[i-1], dp[i-2]+count_[i]*i);
	}
	printf("%lld\n",dp[ma]);
	return 0;
}
