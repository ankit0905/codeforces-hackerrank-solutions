#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int a=1,b=1,i=0;
	while(b<=n){
		long long int temp = a+b;
		a = b;
		b = temp;
		i++;
	}
	cout << i-1 << endl;
	return 0;
}
