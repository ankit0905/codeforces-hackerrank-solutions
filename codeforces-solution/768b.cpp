#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

#define ll long long int

int main()
{	
	ll n, l, r, j;
	cin >> n >> l >> r;
	ll m = n, ct = 0;
	if(n == 0){
	    cout << 0 << endl;
	    return 0;
	}
	vector<ll> v;
	while(m > 0){
		v.push_back(m%2);
		m = m/2ll;
	}
	m = n;
	reverse(v.begin(),v.end());
	for(ll i=l; i<=r; i++){
		ll p;
		for(p=0; p<=50; p++){
			ll num = pow(2ll,p);
			j = i/num;
			j++;
			if(j%2 == 0){
				ll bit = v[p];
				if(bit == 1)
					ct++;
				break;
			}
		}
		//cout << i << " " << ct << endl;
	}
	cout << ct << endl;
	return 0;
}
