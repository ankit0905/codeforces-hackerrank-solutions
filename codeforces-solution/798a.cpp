#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <climits>
using namespace std;

#define ll long long int

int main()
{
	/*std::ios::sync_with _stdio(false);
	cin.tie(NULL);*/
	string str;
	cin >> str;
	int len = str.length();
	int i = 0, j = len-1;
	if(len == 1){
		cout << "YES" << endl;
		return 0;
	}
	int ct = 0;
	while(i < j){
		if(str[i] != str[j])
			ct++;
		i++;
		j--;
	}
	if(ct == 1 || (len%2 == 1 && ct == 0)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
