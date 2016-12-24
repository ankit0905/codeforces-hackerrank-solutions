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
    int n;
    cin >> n;
    int a[7];
    for(int i=0; i<7; i++){
        cin >> a[i];
    }
    int ct=0;
    while(true){
        for(int i=0; i<7; i++){
            ct+=a[i];
            if(ct>=n){
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}
