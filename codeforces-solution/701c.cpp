#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <set>
#include <map>

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
	LL n, j = 0, ans = 1000000000ll;
	cin >> n;
	string s;
	cin >> s;
	set<int> pokemons;
	FI(i,0,n-1)pokemons.insert(int(s[i]));
	int count = pokemons.size(), c = 0;
	map<char, int> mp;
	FI(i,0,n){
		if(!mp[s[i]]){
			mp[s[i]] = 0;
			c++;
		}
		mp[s[i]]++;
		if(c == count){
			while(mp[s[j]] > 1){
				mp[s[j]]--;
				j++;
			}
			ans = min(ans, i-j+1);
		}
	}
	cout << ans << endl;
	return 0;
}
