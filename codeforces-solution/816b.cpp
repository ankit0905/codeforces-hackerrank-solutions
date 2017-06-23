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
#define MAXN 200004
 
ll mod = 1000000007;
ll ans[MAXN];

int main()
{
	ll n,k,q;
	scanf("%lld%lld%lld",&n,&k,&q);
	for(int i=0; i<n; i++){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		ans[a]++;
		ans[b+1]--;
	}
	for(int i=1; i<MAXN; i++){
		ans[i] = ans[i-1]+ans[i];
	}
	for(int i=1; i<MAXN; i++){
		if(ans[i] >= k){
			ans[i] = ans[i-1]+1;
		}
		else{
			ans[i] = ans[i-1];
		}
	}
	while(q--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",ans[b]-ans[a-1]);
	}
	return 0;
}
