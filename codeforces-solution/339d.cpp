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
ll tree[1000000];
ll val[1000000], ct = 0;

void build(int node, int start, int end, ll a[], int op)
{
	//cout << node << " range => " << start << " " << end << endl;
	if(start == end){ 
		tree[node] = a[start];
		val[start] = node;
		//ct++;
	} 
	else{
		//++;
		int mid = (start + end)/2;
		build(2*node+1, start, mid, a, 1-op);
		build(2*node+2, mid+1, end, a, 1-op);
		if(op == 1)
			tree[node] = tree[2*node+1] ^ tree[2*node+2];
		else
			tree[node] = tree[2*node+1] | tree[2*node+2];
	}
}

void update(ll a[], int node, int start, int end, ll i, ll key, int op)
{
	if(i < start || i > end)
		return;
	ct++;
	if(start == end){
		tree[node] = key;
		a[i] = key;
	}
	else{
		int mid = (start + end)/2;
		update(a, 2*node+1, start, mid, i, key, 1-op);
		update(a, 2*node+2, mid+1, end, i, key, 1-op);
		if(op == 1)
			tree[node] = tree[2*node+1] ^ tree[2*node+2];
		else
			tree[node] = tree[2*node+1] | tree[2*node+2];
	}
}

int main()
{
	ll n, m;
	scanf("%lld %lld",&n,&m);
	ll num = pow(2,n);
	ll arr[num];
	for(int i=0; i<num; i++){
		scanf("%lld",&arr[i]);
	}
	int op = (n%2==0)?1:0;
	build(0,0,num-1,arr,op);
	while(m--){
		ll x, y;
		scanf("%lld %lld", &x,&y);
		update(arr,0,0,num-1,x-1,y,op);
		//cout << ct << endl;
		//ct = 0;
		printf("%lld\n",tree[0]);
	}
	return 0;
}
