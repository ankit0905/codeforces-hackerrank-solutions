#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum=0,m=0;
    for(int i=0; i<n; i++){
        long long int a;
        cin >> a;
        sum+=a;
        if(a>m)
            m=a;
    }
    double ans = ceil((double)sum/(n-1));
    //cout << sum << endl;
    cout << max((long long int)ans,m) << endl;
    return 0;
}
