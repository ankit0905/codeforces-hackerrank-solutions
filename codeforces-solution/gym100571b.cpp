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
#define _cin ios_base::sync_with_stdio(NULL);  cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define MAXN 300004
 
ll mod = 1000000007;

int main()
{
	ll n,q,f1,f2,a,b;
	scanf("%lld %lld %lld %lld %lld %lld",&n,&q,&f1,&f2,&a,&b);
	ll x[n], sum[n+1];
	for(int i=0; i<n; i++){
		scanf("%lld",&x[i]);
		sum[i] = (sum[i] + x[i]) % mod;
		sum[i+1] = (sum[i] - x[i] + mod) % mod;
	}
	return 0;
}
