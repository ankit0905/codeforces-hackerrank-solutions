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

pair<ll,pll> tree[4000004];
string str;

void build(int node, int st, int en)
{
	//cout << node << " " << st << " " << en << endl;
	if(st == en){
		if(str[st] == '('){
			tree[node].se.fi = 1;
		}
		else{
			tree[node].se.se = 1;
		}
		return;
	}
	int mid = (st + en)/2;
	build(2*node+1, st, mid);
	build(2*node+2, mid+1, en);
	int tmp = min(tree[2*node+1].se.fi, tree[2*node+2].se.se);
	tree[node].fi = tree[2*node+1].fi + tree[2*node+2].fi;
	tree[node].se.fi = tree[2*node+1].se.fi + tree[2*node+2].se.fi;
	tree[node].se.se = tree[2*node+1].se.se + tree[2*node+2].se.se;
	tree[node].fi += tmp;
	tree[node].se.fi -= tmp;
	tree[node].se.se -= tmp;
}

pair<ll,pll> query(int node, int st, int en, int qs, int qe)
{
	if(qs > qe)
		return mp(0ll,mp(0ll,0ll));
	if(qs <= st && qe >= en)
		return tree[node];
	if(en < qs || st > qe)
		return mp(0ll,mp(0ll,0ll));
	int mid = (st + en)/2;
	pair<ll,pll> lt = query(2*node+1, st, mid, qs, qe);
	pair<ll,pll> rt = query(2*node+2, mid+1, en, qs, qe);
	pair<ll,pll> res;
	ll tmp = min(lt.se.fi, rt.se.se);
	res.fi = lt.fi + rt.fi + tmp;
	res.se.fi = lt.se.fi + rt.se.fi - tmp;
	res.se.se = lt.se.se + rt.se.se - tmp;
	return res;
}

int main()
{
	cin >> str;
	int len = str.length();
	build(0,0,len-1);
	int m;
	scanf("%d",&m);
	while(m--){
		int l,r;
		scanf("%d %d",&l,&r);
		printf("%lld\n",2*query(0,0,len-1,l-1,r-1).fi);
	}
	return 0;
}
