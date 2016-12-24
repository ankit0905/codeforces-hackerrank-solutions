#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n1,n2,k1,k2;
    cin >> n1 >> n2 >> k1 >> k2;
    if(n1>n2){
        cout << "First" << endl;
    }
    else if(n2>=n1){
        cout << "Second" << endl;
    }
    return 0;
}
