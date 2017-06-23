#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,fl=0,ct=1;
    cin >> a >> b;
    while(true){
        if(fl == 0){
            a-=ct;
            if(a < 0){
                cout << "Vladik" << endl;
                break;
            }
            ct++;
            fl = 1;
        }
        else{
            b-=ct;
            if(b < 0){
                cout << "Valera" << endl;
                break;
            }
            ct++;
            fl = 0;
        }
    }
    return 0;
}
