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
	int n,k;
	cin >> n >> k;
	vector<int> a(n),b(k);
	for(int i=0; i<n; i++)cin >> a[i];
	for(int i=0; i<k; i++)cin >> b[i];
	sort(b.rbegin(), b.rend());
	int j = 0;
	for(int i=0; i<n; i++){
		if(a[i] == 0){
			a[i] = b[j++];
		}
	}
	int fl = 0;
	for(int i=0; i<n-1; i++){
		if(a[i] > a[i+1]){
			fl = 1;
			break;
		}
	}
	if(fl == 1)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	return 0;
}
