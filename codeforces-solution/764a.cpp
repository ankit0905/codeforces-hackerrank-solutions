#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define ll long long int

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
	int n,m,z;
	cin >> n >> m >> z;
	int lcm = (n*m)/gcd(n,m);
	cout << z/lcm << endl;
	return 0;
}
