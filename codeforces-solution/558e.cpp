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
#define _cin ios_base::sync_with_stdio(0)
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define MAXN 100004
#define ALPHA 26 
 
ll mod = 1000000007;

string str;
ll temp[26];
ll tree[MAXN][ALPHA], lazy[MAXN];

void build(int node, int ss, int se)
{
	if(ss == se){
		tree[node][str[ss]-'a'] = 1;
		return;
	}
	int mid = (ss + se)/2;
	build(2*node+1, ss, mid);
	build(2*node+2, mid+1, se);
	for(int i=0; i<26; i++){
		tree[node][i] = tree[2*node+1][i] + tree[2*node+2][i];
	}
}

void init()
{
	for(int i=0; i<26; i++){
		temp[i] = 0;
	}
}

void compute(int node, int ss, int se, int qs, int qe)
{
	if(ss > se || ss > qe || qs > se)
		return;
	if(ss >= qs && se <= qe){
		for(int i=0; i<26; i++){
			temp[i] += tree[node][i];
		}
		return;
	}
	int mid = (ss + se)/2;
	compute(2*node+1, ss, mid, qs, qe);
	compute(2*node+2, mid+1, se, qs, qe);
}

void update(int node, int ss, int se, int us, int ue)
{
	if(lazy[node] != 0){
		lazy[node] = 0;
	}
}

int main()
{
	_cin;
	int n,q;
	cin >> n >> q;
	cin >> str;
	build(0,0,n-1);
	while(q--){
		int l,r,k;
		cin >> l >> r >> k;
		l--;r--;
		init();
		compute(0,0,n-1,l,r);
		
	}
	return 0;
}









































