#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double x[n], v[n];
	for(int i=0; i<n; i++){
		cin >> x[i];
	}
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	double ans = 1000000000;
	double t1, t2, t, mid, lo = 0, hi = 1000000000.0, l = 0, h = 1000000000.0;
	for(int j=0; j<165; j++){
		mid = (lo + hi)/2;
		t1 = 0;
		t2 = 1000000000;
		l = 0;
		h = 1000000000;
		for(int i=0; i<n; i++){
			t1 = x[i]-mid*v[i];
			t2 = x[i]+mid*v[i];
			l = max(l,t1);
			h = min(h,t2);
		}
		//cout << mid << " " << lo << " " << hi << endl;
		if(l <= h){
			ans = min(ans,mid);
			hi = mid;
		}
		else{
			lo = mid;
		}
	}
	printf("%.9lf\n",ans);
	return 0;
}
