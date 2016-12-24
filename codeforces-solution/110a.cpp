#include <iostream>
using namespace std;

int main()
{
	long long int n;
	int ct=0,rem;
	cin >> n;
	while(n>0){
		rem=n%10;
		if(rem==4 || rem==7){
			ct++;
		}
		n=n/10;
	}
	if(ct==4||ct==7){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
