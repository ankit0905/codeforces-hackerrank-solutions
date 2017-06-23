#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int

int main()
{
	ll a,b,c,m;
	cin >> a >> b >> c;
	cin >> m;
	vector<ll> v1, v2;
	for(int i=0; i<m; i++){
		ll price;
		string type;
		cin >> price >> type;
		if(type == "USB")
			v1.push_back(price);
		else
			v2.push_back(price);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int sz1 = v1.size(), sz2 = v2.size(), i = 0, j = 0;
	ll count = 0, ans = 0;
	while(a > 0 && i < sz1){
		count++;
		ans += v1[i++];
		a--;
	}
	while(b > 0 && j < sz2){
		count++;
		ans += v2[j++];
		b--;
	}
	while(c > 0 && (i < sz1 || j < sz2)){
		if(i < sz1 && j < sz2){
			count++;
			if(v1[i] <= v2[j]){
				c--;
				ans += v1[i++];
			}
			else{
				c--;
				ans += v2[j++];
			}
		}
		else if(i < sz1){
			count++;
			c--;
			ans += v1[i++];
		}
		else{
			count++;
			c--;
			ans += v2[j++];
		}
	}
	cout << count << " " << ans << endl;
	return 0;
}
