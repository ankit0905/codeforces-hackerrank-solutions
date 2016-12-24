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
    int a[3][3], b[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
            b[i][j]=1;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]%2==1){
                b[i][j]=(b[i][j]+1)%2;
                if(i-1>=0){
                    b[i-1][j]=(b[i-1][j]+1)%2;
                }
                if(j-1>=0){
                    b[i][j-1]=(b[i][j-1]+1)%2;
                }
                if(i+1<3){
                    b[i+1][j]=(b[i+1][j]+1)%2;
                }
                if(j+1<3){
                    b[i][j+1]=(b[i][j+1]+1)%2;
                }
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
