#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n==1 || n==2){
		cout << s << endl;
		return 0;
	}
	vector<int> v(n);
	if(n%2==1){
		int st=(n-1)/2;
		for(int i=0; i<n; i+=2){
			v[i]=st;
			st++;
		}
		st=(n-1)/2;
		st--;
		for(int j=1; j<n; j+=2){
			v[j]=st;
			st--;
		}
	} 
	else{
		int st=(n-1)/2;
		for(int i=0; i<n; i+=2){
			v[i]=st;
			st--;
		}
		st=n/2;
		for(int i=1; i<n; i+=2){
			v[i]=st;
			st++;
		}
	}
	vector<char> ans(n);
	for(int i=0; i<n; i++){
		ans[v[i]]=s[i];
	}
	for(int i=0; i<n; i++){
		cout << ans[i];
	}
	return 0;
}
