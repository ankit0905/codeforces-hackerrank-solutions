#include <iostream>
#include <cmath>
using namespace std;

int iscomposite(int n);

int main()
{
	int n;
	cin >> n;
	for(int i=2; i<=n/2; i++){
		if(iscomposite(i) && iscomposite(n-i)){
			cout << i << " " << n-i;
			return 0;
		}
	}
	return 0;
}

int iscomposite(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 0;
	int max=(int)sqrt(n);
	for(int i=2; i<=max; i++){
		if(n%i==0)
			return 1;
	}
	return 0;
}
