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
#define MAXN 300004
 
ll mod = 1000000007;

int main()
{
	_cin;
	int n, m;
	cin >> n >> m;
	string str;
	cin >> str;
	int len = str.length(), ct = 0, ans = 0;
	for(int i=0; i<len; i++){
		if(str[i] == '.'){
			if(i == 0 || str[i-1] == '.'){
				ct++;
			}
			else{
				ct = 1;
			}
		}
		else{
			if(ct > 0){
				ans += (ct-1);
			}
			ct = 0;
		}
		//cout << i << " " << ans << endl;
	}
	if(ct > 0){
		ans += (ct-1);
	}
	while(m--){
		int idx;
		cin >> idx;
		idx--;
		char ch;
		cin >> ch;
		int fl, fr;
		if(str[idx] == '.'){
			if(ch != '.'){
				str[idx] = ch;
				fl = fr = 1;
				if(idx == 0 || str[idx-1] != '.'){
					fl = 0;
				}
				if(idx == n-1 || str[idx+1] != '.'){
					fr = 0;
				}
				if(fl == 1 && fr == 1){
					ans -= 2;
				}
				else if(fl ^ fr == 1){
					ans--;
				}
			}
		}
		else{
			if(ch == '.'){
				str[idx] = ch;
				fl = fr = 1;
				if(idx == 0 || str[idx-1] != '.'){
					fl = 0;
				}
				if(idx == n-1 || str[idx+1] != '.'){
					fr = 0;
				}
				if(fl == 1 && fr == 1){
					ans += 2;
				}
				else if(fl ^ fr == 1){
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

