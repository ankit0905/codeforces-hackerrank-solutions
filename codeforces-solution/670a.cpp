#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a=2*(n/7), b=n%7;
	if(b==6){
		cout << a+1 << " ";
		cout << a+2 << endl;
	}
	else{
		cout << a << " ";
		if(b>=2){
			cout << a+2 << endl;
		}
		else{
			cout << a+b << endl;
		}
	}
	return 0;
}
