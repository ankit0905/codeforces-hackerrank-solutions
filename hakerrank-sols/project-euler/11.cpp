#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[20][20];
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int v=0,h=0,l=0,r=0,res=0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            v=h=l=r=0;
            if (i <= 16) 
                v = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            if (j <= 16) 
                h = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            if (i<=16 && j <=16) {
                    l = arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                    r = arr[i+3][16 - j]*arr[i+2][17 - j]*arr[i+1][18 - j]*arr[i][19 - j];
            }
            if (v > res)
                res = v;
            if (h > res)
                res = h;
            if (l > res) 
                res = l;
            if (r > res)
                res = r;
        }
    }
    cout << res << endl;
    return 0;
}

