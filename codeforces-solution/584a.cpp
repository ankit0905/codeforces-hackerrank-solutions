#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if(n==1 && t==10){
        cout << "-1" << endl;
        return 0;
    }
    if(t<=9){
        for(int i=0; i<n; i++){
            cout << t;
        }
        cout << endl;
    }
    else{
        for(int i=0; i<n-1; i++){
            cout << "1";
        }
        cout << "0" << endl;
    }
    return 0;
}
