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

ll ans[5004];
ll dp[5004][5004];

int main()
{
	string str;
	cin >> str;
	int idx, n = str.length();
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j){
				dp[i][j] = 0;
			}
			else{
				dp[i][j] = 1;
				ans[1]++;
				ans[2]--;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		if(str[i] == str[i+1]){
			dp[i][i+1] = 2;
			ans[1]++;
			ans[3]--;
		}
	}
	for(int i=3; i<=n; i++){
		for(int j=0; j<n-i+1; j++){
			int end = i+j-1;
			if(dp[j+1][end-1] >= 1 && str[j] == str[end]){
				idx = ceil(((double)j+end)/2);
				dp[j][end] = dp[j][idx-1]+1;
				//cout << j << " " << end << " => " << dp[j][end] << endl;
				ans[1]++;
				ans[dp[j][end]+1]--;
			}
		}
	}
	ans[0] = 0;
	for(int i=1; i<=n; i++){
		ans[i] = ans[i-1]+ans[i];
		printf("%lld ",ans[i]);
	}
	printf("\n");
	return 0;
}

