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

int a[5005];

int main()
{
	int n, st, ans = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	st = a[0];
	for(int i=1; i<n; i++){
		if(a[i] <= st){
			ans += st-a[i]+1;
			a[i] = st+1;
		}
		st = a[i];
	}
	cout << ans << endl;
	return 0;
}