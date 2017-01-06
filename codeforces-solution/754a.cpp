#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <queue>
using namespace std;

#define ll long long int 

int main()
{
	int n,fl=0;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i]!=0)
			fl=1;
	}
	if(fl==0){
		cout << "NO" << endl;
	}
	else if(n==1){
		cout << "YES" << endl;
		cout << 1 << endl;
		cout << "1 1" << endl;
	}
	else{
		vector<pair<int,int> > v;
		int s=a[0],st=1,f=0,en=n;
		for(int i=1; i<n; i++){
			if(a[i]+s==0 && a[i]!=0){
				v.push_back(make_pair(st,i));
				st=i+1;
				s=a[i];
			}
			else{
				s+=a[i];
			}
		} 
		v.push_back(make_pair(st,en));
		int sz = v.size();
		cout << "YES" << endl;
		cout << sz << endl;
		for(int i=0; i<sz; i++){
			cout << v[i].first << " " << v[i].second << endl;
		}
	}
	return 0;
}
