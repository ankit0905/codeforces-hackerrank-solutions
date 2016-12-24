#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
using namespace std;

int main()
{
    long long int a,b,c;
    cin >> a >> b >> c;
    long long int x=a*b/c, y=a*c/b, z=b*c/a;
    long long int x1=sqrt(x), y1=sqrt(y), z1=sqrt(z);
    cout << 4*(x1+y1+z1) << endl;
    return 0;
}
