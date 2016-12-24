#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double ans, sum=0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        sum+=x;
    }
    ans = (double)100*sum/(100*n);
    printf("%.9lf\n", ans);
    return 0;
}
