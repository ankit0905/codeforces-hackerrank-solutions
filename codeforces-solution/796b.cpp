#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <queue>
#include <set>
#include <cstdio>
#include <map>
using namespace std;

#define ll long long int

int main()
{
	long long int n,m,k;
	cin >> n >> m >> k;
	long long int h[m];
	pair<int,int> p[n];
	int arr[n+1];
	for(int i=1; i<=n; i++){
		arr[i] = 0;
	}
	for(int i=0; i<m; i++){
		cin >> h[i];
		arr[h[i]]=1;
	}
	int pos = 1, ans = 1;
	for(int i=0; i<k; i++){
		int u,v;
		scanf("%d%d",&u,&v);
		p[i].first = u;
		p[i].second = v;
		//cout << "pos=" << pos << endl;
		if(arr[pos] == 1){
			ans = pos;
			break;
		}
		if(p[i].first == pos){
			pos = p[i].second;
			ans = pos;
		}
		else if(p[i].second == pos){
			pos = p[i].first;
			ans = pos;
		}
	}
	cout << ans << endl;
	return 0;
}
