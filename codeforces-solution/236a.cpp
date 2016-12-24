#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len=s.length();
	int arr[26]={0};
	for(int i=0; i<len; i++){
		int c=s[i];
		arr[c-97]++;
	}
	int ct=0;
	for(int i=0; i<26; i++){
		if(arr[i]!=0){
			ct++;
		}
	}
	if(ct%2==0){
		cout << "CHAT WITH HER!" << endl;
	}
	else{
		cout << "IGNORE HIM!" <<endl;
	}
	return 0;
}
