#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n], c=0, ans;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i]==1)
			c++;
		//cout << arr[i];
	}
	//cout << c << endl;
	if(n==1 && arr[0]==0){
		cout << "1" << endl;
		return 0;
	}
	else if(n==1 && arr[0]==1){
		cout << "0" << endl;
		return 0;
	}
	else if(n==c){
		cout << c-1 << endl;
		return 0;
	}
	int ct=0, ct1=0,max=-1, flag1=0, flag2=0, c1=0,c2=0;
	if(arr[0]==0){
		flag1=1;
	}
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			ct++;
			if(c1<ct)
				c1=ct;
		}
		else{
			if(c1-c2>max){
				max=c1-c2;
				flag2=1;
				c1=ct;
				c2=ct1;
			}
			ct1++;
			if(c2<ct1)
				c2=ct1;
			if(ct1>=ct){
				if(c1-c2>max){
					max=c1-c2;
					flag2=1;
					c1=0;
					c2=0;
				}
				ct=0;
				ct1=0;
				c1=0;
				c2=0;
			}
		}
		//cout << i <<" " << c1 << " " << c2 << " " << ct << " " << ct1 << " " << max<< endl;
	}
	if(c1-c2>max){
		max=c1-c2;
		flag2=0; 
		c1=ct;
		c2=ct1;
	}
	//cout << ct << " " << ct1 << " " << max << endl;
	//cout << c1 << " " << c2 << endl;
	//ans=c-c2+c1;
	cout << c+max << endl;
	return 0;
}
