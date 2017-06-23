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

int main()
{
	_cin;
	int n;
	cin >> n;
	string str;
	cin >> str;
	int q;
	cin >> q;
	vector<int> v;
	while(q--){
		v.clear();
		int m;
		cin >> m;
		char col;
		cin >> col;
		for(int i=0; i<n; i++){
			if(str[i] != col)
				v.push_back(i);
		}
		int sz = v.size();
		//cout << "size = " << sz << endl;
		if(m >= sz){
			cout << n << endl;
			continue;
		}
		int ma = 0;
		for(int i=0; i<=sz-m; i++){
			int lo = v[i], hi = v[i+m-1];
			int temp = hi-lo+1;
			//cout << i << " " << lo << " " << hi << " " << temp;
			if(lo-1 >= 0){
				if(i == 0){
					temp += lo;
				}
				else{
					temp += (lo-v[i-1]-1);
				}
			}
			//cout << " " << temp;
			if(hi+1 < n){
				if(i == sz-m){
					temp += n-hi-1;
				}
				else{
					temp += (v[i+m]-hi-1);
				}
			}
			//cout << " " <<  temp  << endl;
			ma = max(temp,ma);
		}
		cout << ma << endl;
	}
	return 0;
}
