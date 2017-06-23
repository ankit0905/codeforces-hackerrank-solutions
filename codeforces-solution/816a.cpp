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
#include <cstdlib>
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
#define MAXN 1000004
 
ll mod = 1000000007;

ll arr[24] = {0,10,20,30,40,50,-1,-1,-1,-1,1,11,21,31,41,51,-1,-1,-1,-1,2,12,22,32};

int main()
{
	string str;
	cin >> str;
	string hh = str.substr(0,2), mm = str.substr(3,2);
	int h = stoi(hh), m = stoi(mm);
	string h1 = hh, m1 = mm;
	swap(h1[0],h1[1]);
	int ans = 0;
	if(h >= 6 && h <= 9){
		int lh = 9-h;
		ans = lh*60;
		int lm = 60-m;
		ans += lm;
		ans++;
	}
	else if(h >= 16 && h <= 19){
		int lh = 19-h;
		ans = lh*60;
		int lm = 60-m;
		ans += lm;
		ans += 2;
	}
	else{
		int req = arr[h];
		//cout << req << endl;
		if(h == 23){
			if(m <= 32){
				ans = 32-m;
			}
			else{
				ans = 60-m;
			}
		}
		else if(req >= m){
			ans = req-m;
		}
		else{
			if(h == 5){
				ans = 241+60-m;
			}
			else if(h == 15){
				ans = 242+60-m;
			}
			else
				ans = 60-m+arr[h+1];
		}
	}
	cout << ans << endl;
	return 0;
}
