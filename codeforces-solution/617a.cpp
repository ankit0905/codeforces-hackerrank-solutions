#include <iostream>
using namespace std;

int main()
{
	int n, ct=0;
	cin >> n;
	while(n!=0){
		if(n-5>=0){
			n=n-5;
			ct++;
		}
		else if(n-4>=0){
			n=n-4;
			ct++;
		}
		else if(n-3>=0){
			n=n-3;
			ct++;
		}
		else if(n-2>=0){
			n=n-2;
			ct++;
		}
		else if(n-1>=0){
			n=n-1;
			ct++;
		}
	}
	cout << ct << endl;
	return 0;
}
