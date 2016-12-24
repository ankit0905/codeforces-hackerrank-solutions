#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;

int main()
{
	int n,m;
	cin >> n;
	int boy[n];
	for(int i=0; i<n; i++)
		cin >> boy[i];
	cin >> m;
	sort(boy, boy+n);
	int girl[m];
	for(int i=0; i<m; i++)
		cin >> girl[i];
	sort(girl, girl+m);
	int j=0, ans=0;
	for(int i=0; i<n; i++){
		for(int k=j; k<m; k++){
			if(abs(boy[i]-girl[k])<=1){
				ans++;
				j=k+1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
