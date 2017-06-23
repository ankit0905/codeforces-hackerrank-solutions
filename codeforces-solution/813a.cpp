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
	int n,m;
	cin >> n;
	int a[n],sum = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	cin >> m;
	int l[m],r[m];
	int ans = -1;
	for(int i=0; i<m; i++){
		cin >> l[i] >> r[i];
		if(ans == -1 && (l[i] >= sum || (l[i] <= sum && r[i] >= sum))){
			if(sum > l[i])
				ans = sum;
			else
				ans = l[i];
		}
	}
	cout << ans << endl;
	return 0;
}
