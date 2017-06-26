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
	int freq[1030]={0}, tmp[1030]={0};
	int n,k,x,ele,num;
	scanf("%d %d %d",&n,&k,&x);
	for(int i=0; i<n; i++){
		scanf("%d",&ele);
		freq[ele]++;
	}
	vector<pair<int,int> > v1, v2;
	for(int i=0; i<k; i++){
		tmp[0] = 0;
		for(int j=1; j<1024; j++){
			tmp[j] = tmp[j-1]+freq[j-1];
			//cout << "j = " << j << " " << tmp[j] << endl;
		}
		for(int j=0; j<1024; j++){
			if(freq[j] > 0){
				ele = j^x;
				num = (freq[j]/2);
				//cout << j << " " << freq[j] << endl;
				if(tmp[j] % 2 == 0){
					if(freq[j] % 2 == 1){
						num++;
					}
				}
				//cout << j << " " << tmp[j] << " " << num << " " << ele << endl;
				v1.pb(mp(j,num));
				v2.pb(mp(ele,num));
				//freq[j] -= num;
				//freq[ele] += num;
			}
		}
		int sz = v1.size();
		for(int i=0; i<sz; i++){
			freq[v1[i].first] -= v1[i].second;
			freq[v2[i].first] += v2[i].second;
		}
		v1.clear();
		v2.clear();
	}
	int mi = 10000, ma = -1;
	for(int i=0; i<1024; i++){
		if(freq[i] > 0){
			if(i < mi)
				mi = i;
			if(i > ma)
				ma = i;
		}
	}
	cout << ma << " " << mi << endl;
	return 0;
}
