#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string brr[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string crr[] = {"x","x","Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string drr[] = {"Hundred","Thousand","Million","Billion","Trillion"};

void solve(string num){
	int i=0, flag =0, len = num.length();
	if(len==13){
		cout<<arr[1]<<" "<<drr[4]<<" ";
		i++;
		len--;
	}
	if(len>9 && len<13){
		if(len == 12){
			if(num[i]-'0' != 0){
				cout << arr[num[i]-'0'] << " "<< drr[0] <<" ";
				flag =1;
			}
			len--;
			i++;
		}
		if(len==11 && (num[i]-'0')==1){
			cout << brr[num[i+1]-'0'] << " ";
			flag = 1;
			i = i+2;
		}
		else if(len==11){
			if(num[i]-'0' != 0)	{
				cout << crr[num[i]-'0'] << " ";
				flag =1;
			}
			if(num[i+1]-'0' != 0) {
				cout << arr[num[i+1]-'0'] << " ";
				flag =1;
			}
			i = i+2;
		}
		else{
			flag =1;
			cout << arr[num[i]-'0'] << " ";
			i++;
		}
		if(flag = 1)
			cout << drr[3] << " ";
		len=9;
	}
	if(len>6 && len <10){
		flag = 0;
		if(len == 9){
			if(num[i]-'0'){
				cout << arr[num[i]-'0'] << " "<< drr[0] << " ";
				flag =1;
			}
			len--;
			i++;	
		}
		if(len==8 && (num[i]-'0')==1){
			cout << brr[num[i+1]-'0'] << " ";
			flag =1;
			i = i+2;
		}
		else if(len==8){
			if(num[i]-'0')	{
				cout << crr[num[i]-'0'] << " ";
				flag =1;
			}
			if(num[i+1]-'0') {
				cout << arr[num[i+1]-'0'] << " ";	
				flag =1;
			}
			i = i+2;
		}
		else{
			cout << arr[num[i]-'0'] << " ";
			flag =1;
			i++;
		}
		if(flag)
			cout<<drr[2]<<" ";
		len=6;
	}
	if(len>3 && len < 7){
		flag = 0;
		if(len == 6){
			if(num[i]-'0' != 0){
				cout << arr[num[i]-'0'] << " "<< drr[0] << " ";
				flag = 1;
			}
			i++;
			len--;
		}
		
		if(len == 5 && (num[i]-'0')==1){
			cout<<brr[num[i+1]-'0']<<" ";
			flag= 1;
			i = i+2;
		}
		else if(len ==5 ){
			if(num[i]-'0' != 0)	{
				cout << crr[num[i]-'0'] << " ";
				flag= 1;
			}
			if(num[i+1]-'0') {
				cout << arr[num[i+1]-'0'] << " ";
				flag= 1;
			}
			i = i+2;					
		}
		else{
			cout << arr[num[i]-'0'] << " ";
			flag= 1;
			i++;
		}
		if(flag == 1)
			cout<<drr[1]<<" ";
		len=3;
	}
	if(len<4){
		 if(len == 3){
			 if(num[i]-'0' != 0)
				cout << arr[num[i]-'0'] << " " << drr[0]<<" ";
			 i++;
			 len--;
		}
		if(len == 2 && (num[i]-'0')==1){
			cout << brr[num[i+1]-'0'] << " ";
		}
		else if(len == 2){
			if(num[i]-'0' != 0)
				cout << crr[num[i]-'0'] << " ";
			if(num[i+1]-'0' != 0)	
				cout << arr[num[i+1]-'0'] << " ";					
		}
		else{
			cout << arr[num[i]-'0'] << " ";
		}
		i+=2;
		len-=3;
	}
	cout<<endl;
}
int main(){
	int t,n;
	string inp;
	cin >> t;	
	while(t--){
		cin >> inp;
		solve(inp);
	}
}

