#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

#define FI(i,a,b) for(int i=(a);i<=(b);i++)
#define FD(i,a,b) for(int i=(a);i>=(b);i--)

#define LL long long
#define Ldouble long double
#define PI 3.14159265358979323846264338327950288419

#define PII pair<int,int>
#define PLL pair<LL,LL>
#define mp make_pair
#define fi first
#define se second

int main()
{
	LL n, t, ans = 0;
	cin >> n >> t;
	LL a[n],b[n+1];
	FI(i,0,n-1)cin >> a[i];
	b[0] = 0;
	b[1] = a[0];
	FI(i,1,n-1)b[i+1] = b[i]+a[i];
	FI(i,0,n-1){
		//cout << b[i+1] << endl;
		LL lo = i+1, hi = n, mid;
		while(lo <= hi){
			mid = (lo+hi)/2;
			//cout << lo << " " << hi << endl;
			//cout << mid << "=>" << b[mid] << " i=>" << b[i] << endl;
			if(b[mid]-b[i] <= t){
				ans = max(ans,mid-i);
				lo = mid+1;
			}
			else{
				hi = mid-1;
			}
			//cout << lo << " " << hi << endl << endl;
		}
		//cout << "curr = " << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
