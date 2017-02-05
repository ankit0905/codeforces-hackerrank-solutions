#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <cstdio>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int isprime(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else{
		int max = (int)sqrt(n);
		for(int i=2; i<=max; i++){
			if(n%i==0)
				return 0;
		}
	}
	return 1;
}

int main()
{
	int i,n;
	cin >> n;
	for(i=1; i<=1000; i++){
		if(!isprime(i*n+1)){
			cout << i << endl;
			return 0;
		}
	}
}
