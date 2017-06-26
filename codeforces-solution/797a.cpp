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
	int n,k;
	cin >> n >> k;
	int ma = sqrt(n);
	if(k == 1){
		if(n > 1)
			cout << n << endl;
		else
			cout << -1 << endl;
		return 0;
	}
	vector<int> v;
	int m = n;
	for(int i=2; i<m; i++){
		while(n%i == 0){
			v.push_back(i);
			n = n/i;
		}
	}
	int sz = v.size();
	int diff = sz-k;
	if(diff < 0){
		cout << -1;	
	}
	else{
		int j=0;
		while(j < sz){
			if(j == k-1){
				break;
			}
			cout << v[j] << " ";
			j++;
		}
		int prod = 1;
		while(j < sz){
			prod *= v[j];
			j++;
		}
		cout << prod;
	}
	cout << endl;
	return 0;
}
