#include <iostream>
using namespace std;

int main()
{
	long long int n,a,b,c,ans1=0,ans2=0,ans3=0;
	cin >> n >> a >> b >> c;
	n=n%4;
	if(n==0){
		cout << "0" << endl;
	}
	else if(n==1){
		ans3 = c;
		ans2 = a+b;
		ans1 = 3LL*a; 
		cout << min(ans1,min(ans2,ans3)) << endl;
	}
	else if(n==2){
		ans1 = 2LL*a;
		ans2 = b;
		ans3 = 2LL*c;
		cout << min(ans1, min(ans2,ans3)) << endl;
	}
	else{
		ans1 = a;
		ans2 = b+c;  
		ans3 = 3LL*c;
		cout << min(ans1,min(ans2,ans3)) << endl;
	}
	return 0;
}
