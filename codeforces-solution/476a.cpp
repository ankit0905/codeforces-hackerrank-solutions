#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int max=n, min=ceil((double)n/2);
    for(int i=min; i<=max; i++){
        if(i%m==0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
