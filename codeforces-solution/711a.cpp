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
    char seats[n][5];
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> seats[i][j];
        }
    }
    int flag=0;
    for(int i=0; i<n; i++){
        if(seats[i][0]=='O'&&seats[i][1]=='O'){
            seats[i][0]=seats[i][1]='+';
            flag=1;
            break;
        }
        else if(seats[i][3]=='O'&&seats[i][4]=='O'){
            seats[i][3]=seats[i][4]='+';
            flag=1;
            break;    
        }
    }
    if(flag==0){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cout<< seats[i][j];
        }
        cout << endl;
    }
    return 0;
}
