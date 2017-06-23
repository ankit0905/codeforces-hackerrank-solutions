#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	scanf("%d",&n);
	pair<int,int> p1, p2, c1, c2;
	for(int i=0; i<n; i++){
		int l,r;
		scanf("%d %d",&l,&r);
		if(i==0){
			p1 = make_pair(l,r);
			p2 = make_pair(l,r);
		}
		else{
			if(l > p2.first){
				p2 = make_pair(l,r);
			}
			if(r < p1.second){
				p1 = make_pair(l,r);
			}
		}
	}
	scanf("%d",&m);
	for(int i=0; i<m; i++){
		int l,r;
		scanf("%d %d",&l,&r);
		if(i==0){
			c1 = make_pair(l,r);
			c2 = make_pair(l,r);
		}
		else{
			if(l > c2.first){
				c2 = make_pair(l,r);
			}
			if(r < c1.second){
				c1 = make_pair(l,r);
			}
		}
	}
	int ans1 = 0, ans2 = 0;
	
	if((p1.second >= c2.first && p1.second <= c2.second) || (c2.second >= p1.first && c2.second <= p1.second)){
		ans1 = 0;
	}
	else{
		if(p1.second < c2.second){
			ans1 = abs(p1.second-c2.first);
		}
		else{
			ans1 = abs(c2.second-p1.first);
		}
	}
	if(p2.second >= c1.first && p2.second <= c1.second || (c1.second >= p2.first && c1.second <= p2.second)){
		ans2 = 0;
	}
	else{
		if(p2.second < c1.second){
			ans2 = abs(p2.second-c1.first);
		}
		else{
			ans2 = abs(c1.second-p2.first);
		}
	}
	cout << max(ans1,ans2) << endl;
	return 0;
}
