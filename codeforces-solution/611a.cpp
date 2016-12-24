#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, ct=0;
	string s1, s2;
	cin >> x >> s1 >> s2;
	if(s2[0]=='w'){
		if(x==5 || x==6){
			ct=53;
		}
		else{
			ct=52;
		}
	}
	else{
		if(x==31){
			ct=7;
		}
		else if(x<=29){
			ct=12;
		}
		else if(x==30){
			ct=11;
		}
	}
	cout << ct << endl;
	return 0;
}
