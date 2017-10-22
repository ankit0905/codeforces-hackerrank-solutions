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
#define MAXN 4000004
 
ll mod = 1000000007;

string num;
pair<pll,pll> tree[MAXN];
ll lazy[MAXN];

void build(int node, int ss, int se)
{
	if(ss == se){
		tree[node].fi.fi = 1;
		tree[node].fi.se = 1;
		if(num[ss] == '4')
			tree[node].se.fi = 1;
		else
			tree[node].se.se = 1;
		return;
	}
	int mid = (ss + se)/2;
	build(2*node+1, ss, mid);
	build(2*node+2, mid+1, se);
	tree[node].se.fi = (tree[2*node+1].se.fi + tree[2*node+2].se.fi);
	tree[node].se.se = (tree[2*node+1].se.se + tree[2*node+2].se.se);
	tree[node].fi.fi = max(tree[2*node+1].fi.fi + tree[2*node+2].se.se, max(tree[2*node+2].fi.fi + tree[2*node+1].se.fi, tree[2*node+1].se.fi + tree[2*node+2].se.se));
	tree[node].fi.se = max(tree[2*node+1].fi.se + tree[2*node+2].se.fi, max(tree[2*node+1].se.se + tree[2*node+2].fi.se, tree[2*node+1].se.se + tree[2*node+2].se.fi));
}

void update(int node, int ss, int se, int us, int ue)
{
	if(lazy[node] != 0){
		swap(tree[node].se.fi, tree[node].se.se);
		swap(tree[node].fi.fi, tree[node].fi.se);
		if(ss != se){
			lazy[2*node+1] = 1-lazy[2*node+1];
			lazy[2*node+2] = 1-lazy[2*node+2];
		}
		lazy[node] = 0;
	}
	if(ss > se || ss > ue || se < us)
		return;
	if(ss >= us && se <= ue){
		swap(tree[node].se.fi, tree[node].se.se);
		swap(tree[node].fi.fi, tree[node].fi.se);
		if(ss != se){
			lazy[2*node+1] = 1-lazy[2*node+1];
			lazy[2*node+2] = 1-lazy[2*node+2];
		}
		return;
	}
	int mid = (ss + se)/2;
	update(2*node+1, ss, mid, us, ue);
	update(2*node+2, mid+1, se, us, ue);
	tree[node].se.fi = (tree[2*node+1].se.fi + tree[2*node+2].se.fi);
	tree[node].se.se = (tree[2*node+1].se.se + tree[2*node+2].se.se);
	tree[node].fi.fi = max(tree[2*node+1].fi.fi + tree[2*node+2].se.se, max(tree[2*node+2].fi.fi + tree[2*node+1].se.fi, tree[2*node+1].se.fi + tree[2*node+2].se.se));
	tree[node].fi.se = max(tree[2*node+1].fi.se + tree[2*node+2].se.fi, max(tree[2*node+1].se.se + tree[2*node+2].fi.se, tree[2*node+1].se.se + tree[2*node+2].se.fi));
}

ll query(int node, int ss, int se, int qs, int qe)
{
	if(lazy[node] != 0){
		swap(tree[node].se.fi, tree[node].se.se);
		swap(tree[node].fi.fi, tree[node].fi.se);
		if(ss != se){
			lazy[2*node+1] = 1-lazy[2*node+1];
			lazy[2*node+2] = 1-lazy[2*node+2];
		}
		lazy[node] = 0;
	}
	if(ss > se || ss > qe || se < qs)
		return 0;
	if(ss >= qs && se <= qe){
		return tree[node].fi.fi;
	}
	int mid = (ss + se)/2;
	return query(2*node+1, ss, mid, qs, qe) + 
		query(2*node+2, mid+1, se, qs, qe);
}

int main()
{
	_cin;
	ll n,m;
	scanf("%lld %lld",&n,&m);
	cin >> num;
	build(0,0,n-1);
	while(m--){
		ll l,r;
		string type;
		cin >> type;
		if(type[0] == 'c'){
			cout << query(0,0,n-1,0,n-1) << endl;	
		}
		else{
			cin >> l >> r;
			l--;r--;
			update(0,0,n-1,l,r);
		}
	}
	return 0;
}
