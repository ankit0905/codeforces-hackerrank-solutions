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
	int n,k1,k2;
	cin >> n;
	cin >> k1;
	deque<int> d1, d2;
	for(int i=0; i<k1; i++){
		int x;
		cin >> x;
		d1.push_back(x);
	}
	cin >> k2;
	for(int i=0; i<k2; i++){
		int x;
		cin >> x;
		d2.push_back(x);
	}
	int ct = 0, ans = -1;
	while(ct <= 10000){
		int a = d1.front(), b = d2.front();
		if(a > b){
			d2.pop_front();
			d1.pop_front();
			d1.push_back(b);
			d1.push_back(a);
		}
		else{
			d2.pop_front();
			d1.pop_front();
			d2.push_back(a);
			d2.push_back(b);
		}
		ct++;
		if(d1.size() == 0){
			cout << ct << " " << 2 << endl;
			break;
		}
		else if(d2.size() == 0){
			cout << ct << " " << 1 << endl;
			break;
		}
	}
	if(ct >= 10000){
		cout << "-1" << endl;
	}
	return 0;
}
