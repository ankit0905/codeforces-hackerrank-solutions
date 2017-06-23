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
	_cin;
	int n, ct = 1;
	cin >> n;
	if(n <= 2){
		cout << n << endl;
		return 0;
	}
	vector<pll> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i].first >> v[i].second;
	}
	int last = v[0].first+1;
	for(int i=1; i<n-1; i++){
		int left = v[i].first-v[i].second;
		if(left >= last){
			//cout << "left => " << i << " " << left << " " << v[i].first << " " << last << endl;
			ct++;
			last = max((ll)last,v[i].first+1ll);
			continue;
		}
		int right = v[i].first+v[i].second;
		if(right < v[i+1].first){
			last = right+1;
			//cout << "right => " << i << " " << right << " " << v[i].first << " " << last << endl;
			ct++;
			continue;
		}
		last = max((ll)last,v[i].first+1ll);
	}
	ct++;
	cout << ct << endl;
	return 0;
}
