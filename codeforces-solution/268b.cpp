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
    int ans=n;
    for(int i=1; i<n; i++){
        ans+=(n-i)*i;
    }
    cout << ans << endl;
    return 0;
}
