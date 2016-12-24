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
    long long int n;
    cin >> n;
    long long int a[n+1],s=0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        s+=a[i];
    }
    s=s%(n+1);
    int temp=s,ct=0;
    for(int i=1; i<=5; i++){
        if((temp+i)%(n+1)!=1)
            ct++;
    }
    cout << ct << endl;
    return 0;
}
