#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

#define ll long long int
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;

bool compare(const pll &a, const pll &b)
{
	return a.first < b.first;
}

int main()
{
	ll n,d;
	cin >> n >> d;
	vector<pll> v;
	for(int i=0; i<n; i++){
		ll a, b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end());
	for(int i=1; i<n; i++){
		v[i].second = v[i-1].second + v[i].second;
	}
	ll temp1, temp2, ans = 0;
	for(int i=0; i<n; i++){
		int num1 = v[i].first + d - 1, num2 = v[i].first - d + 1;
		int lo = lower_bound(v.begin(), v.end(), pll(num2, 0), compare)-v.begin();
		int hi = upper_bound(v.begin(), v.end(), pll(num1, 0), compare)-v.begin();
		hi--;
		//cout << num1 << " " << num2 << " " <<  " " << lo << " " << hi << endl;
		if(lo != 0){
			temp1 = v[hi].second - v[i-1].second;
			temp2 = v[i].second - v[lo-1].second;
		}
		else{
			if(i != 0)
				temp1 = v[hi].second - v[i-1].second;
			else
				temp1 = v[hi].second;
			temp2 = v[i].second;
		}
		//cout << temp << endl;
		ans = max(ans, max(temp1,temp2));
	}
	cout << ans << endl;
	return 0;
}
