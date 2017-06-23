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

int main()
{
	_cin;
	int n;
	cin >> n;
	ll t[n];
	for(int i=0; i<n; i++)cin >> t[i];
	sort(t,t+n);
	ll curr = t[0], ans = 1;
	for(int i=1; i<n; i++){
		if(curr <= t[i]){
			curr += t[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
