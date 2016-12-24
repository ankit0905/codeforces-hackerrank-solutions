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
    long long int a[n+1],b[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        b[a[i]]=i;
    }
    long long int m,aa=0,bb=0;
    cin >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        aa+=b[x], bb+=n-b[x]+1;
    }
    cout << aa << " " << bb << endl;
    return 0;
}
