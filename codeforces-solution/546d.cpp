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
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()

#define INF 2147483647
#define SIZE 5000004

ll mod = 1000000007;

ll spf[SIZE+1], dp[SIZE+1];

void sieve()
{
    spf[1] = 1;
    for (int i=2; i<SIZE; i++)
        spf[i] = i;
 
    for (int i=4; i<SIZE; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<SIZE; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<SIZE; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

void init()
{
	int ct, num, ele;
	dp[0] = dp[1] = 0;
	for(int i=2; i<=5000001; i++){
		ct = 0;
		num = i;
		ele = spf[i];
		while(num > 1){
			num = num/ele;
			ele = spf[num];
			ct++;
		}
		dp[i] = dp[i-1] + ct;
	}
}

int main()
{
	_cin;
	sieve();
	init();
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		printf("%lld\n",dp[a]-dp[b]);
	}
	return 0;
}
