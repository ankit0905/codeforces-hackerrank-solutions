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
	int n,k,d;
	cin >> n >> k >> d;
	int dp[n+1][2];
	dp[0][0] = 1;
	dp[0][1] = 0;
	for(int i=1; i<=n; i++){
		dp[i][0] = 0;
		dp[i][1] = 0;
		for(int j=1; j<=k; j++){
			if(i - j >= 0){
				if(j < d){
					dp[i][0] = (dp[i][0] + dp[i-j][0]) % mod;
					dp[i][1] = (dp[i][1] + dp[i-j][1]) % mod;
				}
				else{
					dp[i][1] = (dp[i][1] + dp[i-j][0]) % mod;
					dp[i][1] = (dp[i][1] + dp[i-j][1]) % mod;
				}
			}
		}
	}
	cout << dp[n][1] << endl;
	return 0;
}








