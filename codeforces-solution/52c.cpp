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
#define MAXN 1000004
 
ll mod = 1000000007;

ll arr[MAXN], tree[MAXN], lazy[MAXN];

void build(int node, int ss, int se)
{
	if(ss == se){
		tree[node] = arr[ss];
		return;
	}
	int mid = (ss + se)/2;
	build(2*node+1, ss, mid);
	build(2*node+2, mid+1, se);
	tree[node] = min(tree[2*node+1], tree[2*node+2]);
}

void update(int node, int ss, int se, int us, int ue, ll diff)
{
	if(lazy[node] != 0){
		tree[node] += lazy[node];
		if(ss != se){
			lazy[2*node+1] += lazy[node];
			lazy[2*node+2] += lazy[node];
		}
		lazy[node] = 0;
	}
	if(ss > se || ss > ue || se < us)
		return;
	if(ss >= us && se <= ue){
		tree[node] += diff;
		if(ss != se){
			lazy[2*node+1] += diff;
			lazy[2*node+2] += diff;
		}
		return;
	}
	int mid = (ss+se)/2;
	update(2*node+1, ss, mid, us, ue, diff);
	update(2*node+2, mid+1, se, us, ue, diff);
	tree[node] = min(tree[2*node+1], tree[2*node+2]);
}

ll query(int node, int ss, int se, int qs, int qe)
{
	if(lazy[node] != 0){
		tree[node] += lazy[node];
		if(ss != se){
			lazy[2*node+1] += lazy[node];
			lazy[2*node+2] += lazy[node];
		}
		lazy[node] = 0;
	}
	if(ss > se || ss > qe || se < qs)
		return 1000000000ll;
	if(ss >= qs && se <= qe)
		return tree[node];
	int mid = (ss+se)/2;
	return min(query(2*node+1, ss, mid, qs, qe), 
			query(2*node+2, mid+1, se, qs, qe));
}

int main()
{
	int n,m;
	scanf("%d",&n);
	for(int i=0; i<n; i++)scanf("%lld",&arr[i]);
	build(0,0,n-1);
	scanf("%d",&m);
	while(m--){
		ll l,r,val,tmp1,tmp2;
		char ch;
		scanf("%lld %lld%c",&l,&r,&ch);
		if(ch != '\n'){
			scanf("%lld",&val);
			if(l > r){
				update(0,0,n-1,l,n-1,val);
				update(0,0,n-1,0,r,val);
			}
			else{
				update(0,0,n-1,l,r,val);
			}
		}
		else{
			if(l > r){
				tmp1 = query(0,0,n-1,l,n-1);
				tmp2 = query(0,0,n-1,0,r);
				printf("%lld\n",min(tmp1,tmp2));
			}
			else{
				tmp1 = query(0,0,n-1,l,r);
				printf("%lld\n",tmp1);
			}
		}
	}
	return 0;
}
