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
#define MAXN 300004
 
ll mod = 1000000007;

int main()
{
	_cin;
	ll n;
	cin >> n;
	ll a=0,d=1;
	ll tmpa, tmpd;
	for(int i=1; i<=n; i++){
		tmpa = (d+2ll*a)%mod;
		tmpd = (3ll*a)%mod;
		a = tmpa;
		d = tmpd;
	}
	cout << d << endl;
	return 0;
}
