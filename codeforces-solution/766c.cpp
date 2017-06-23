#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define ll long long int

ll m = 1000000007;
ll arr[26];

int isValid(string s, int len)
{
	for(int i=0; i<len; i++){
		int ch = s[i]-97;
		if(arr[ch] < len)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	for(int i=0; i<26; i++)
		cin >> arr[i];
	int ma = 0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			string tmp = str.substr(i,j-i+1);
			if(isValid(tmp,j-i+1)){
				ma = max(ma,j-i+1);
			}
		}
	}
	ll dp[n+1];
	dp[0] = 1;
	set<char>::iterator it;
	set<char> tmp;
	for(int i=1; i<n; i++){
		dp[i] = dp[i-1];
		tmp.insert(str[i]);
		int len = 1;
		int j = i-1;
		//cout << "i=" << i << endl;
		
		while(j>=0){
			char ch = str[j];
			tmp.insert(ch);
			int fl = 1;
			//cout << "j="<<j << " len=" << len <<  endl;
			for(it=tmp.begin(); it!=tmp.end(); it++){
				char c = *it;
				int num = c-97;
				if(arr[num]<=len){
					fl = 0;
					break;
				}
			}
			if(fl == 1){
				if(j-1 >= 0)
					dp[i] = (dp[i] + dp[j-1])%m;
				else if(j-1 == -1)
					dp[i] = (dp[i] + 1)%m;
				len++;
				j--;
			} 
			else{
				break;
			}
		}
		tmp.clear();
		//cout << dp[i] << " final = " << len << endl << endl;
	}
	string s1="";
	int len = 0, ans = 1;
	for(int i=0; i<n; i++){
		char ch = str[i];
		tmp.insert(ch);
		int fl = 1;
		for(it=tmp.begin(); it!=tmp.end(); it++){
			char c = *it;
			int num = c-97;
			if(arr[num]<=len){
				fl = 0;
				break;
			}
		}
		if(fl == 1){
			len++;
		}
		else{
			tmp.clear();
			len = 1;
			tmp.insert(ch);
			ans++;
		}
	}
	cout << dp[n-1] << endl;
	cout << ma << endl;
	cout << ans << endl;
	return 0;
}
