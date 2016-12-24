#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n, d, ct=0,max=0;
	cin >> n >> d;
	for(int i=0; i<d; i++){
		string s;
		cin >> s;
		int len=s.length(), flag=0;
		for(int j=0; j<len; j++){
			if(s[j]=='0'){
				flag=1;
				break;
			}
		}
		//cout << flag << endl;
		if(flag==1){
			ct++;
		}
		else{
			if(ct>max){
				max=ct;
			}
			ct=0;
		}
	}
	if(ct>max){
		max=ct;
	}
	cout << max << endl; 
	return 0;
}
