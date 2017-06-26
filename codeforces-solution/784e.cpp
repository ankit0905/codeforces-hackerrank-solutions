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
#include <cstdlib>
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

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int ans = ((a^b)&(c|d)^((b&c)|(a^d)));
	cout << ans << endl;
	return 0;
}
