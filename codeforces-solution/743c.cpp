#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n==1){
		cout << "-1" << endl;
	}
	else{
		int a=n,b=n+1,c=n*(n+1);
		cout << a << " " << b << " " << c << endl;
 	}
	return 0;
}
