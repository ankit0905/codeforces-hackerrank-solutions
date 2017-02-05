#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <cstdio>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<string> a, b;
	for(int i=0; i<n+m; i++){
		string inp;
		cin >> inp;
		if(i<n)
			a.push_back(inp);
		else
			b.push_back(inp);
	}	
	int ct=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(b[j]==a[i]){
				ct++;
			}
		}
	}
	n-=ct;
	m-=ct;
	int n1 = (int)ceil((double)ct/2), m1 = ct/2;
	n+=n1;
	m+=m1;
	if(n>m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
