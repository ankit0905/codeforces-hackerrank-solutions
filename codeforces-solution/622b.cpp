#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int hr=(s[0]-48)*10+(s[1]-48);
	int min=(s[3]-48)*10+(s[4]-48);
	long long time;
	cin>>time;
	long long res;
	res=hr*60+min;
	res+=time;
	res%=1440;
	int l=res/60;
	int m=res%60;
	if(l<10) cout<<"0";
	cout<<l<<":";
	if(m<10) cout<<"0";
	cout<<m;
	
	return 0;	
}
