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

double dp[105][105][105];

int main()
{
	int r,s,p;
	cin >> r >> s >> p;
	dp[r][s][p] = 1;
	for(int i=r+s+p; i>0; i--){
		for(int j=r; j>=0; j--){
			for(int k=s; k>=0; k--){
				int l = i-j-k;
				if(l < 0 || l > p) continue;
				if((j == 0 && k == 0) || (j == 0 && l == 0) || (l == 0 && k == 0)) continue;
				double tmp = dp[j][k][l];
				double numr = j*k, nums = k*l, nump = l*j;
				double tot = numr+nums+nump;
				if(j > 0){
					dp[j-1][k][l] += ((tmp*nump)/tot);
				}
				if(k > 0){
					dp[j][k-1][l] += ((tmp*numr)/tot);
				}
				if(l > 0){
					dp[j][k][l-1] += ((tmp*nums)/tot);
				}
			}
		}
	}
	double ansr, anss, ansp;
	ansr = anss = ansp = 0;
	for(int i=1; i<=r; i++) ansr += dp[i][0][0];
	for(int j=1; j<=s; j++) anss += dp[0][j][0];
	for(int k=1; k<=p; k++) ansp += dp[0][0][k];
	printf("%.9lf %.9lf %.9lf\n",ansr,anss,ansp);
	return 0;
}
