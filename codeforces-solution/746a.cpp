#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	b=b/2;
	c=c/4;
	cout << min(a,min(b,c))*7; 
	return 0;
}
