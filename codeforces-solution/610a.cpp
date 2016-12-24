#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	long long int n,m,s;
	cin >> n;
	if(n%2==1 ){
		cout << "0" << endl;
	}
	else{
		m=n/2;
		if(m%2==0){
			s=m/2 - 1;
		}
		else{
			s=m/2;
		}
		cout << s << endl;
	}
	return 0;
}
