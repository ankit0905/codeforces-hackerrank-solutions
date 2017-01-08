#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int table[1000005][8];
int mod = 1000000007;

void count( int S[], int m, int n )
{
    int i, j, x, y;    
    for (i=0; i<m; i++)
        table[0][i] = 1;
 
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
            y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = (x + y)%mod;
        }
    }
    //return table[n][m-1];
}

int main() {
    int arr[] = {1,2,5,10,20,50,100,200};
    count(arr,8,1000000);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << table[n][7] << endl;
    }
    return 0;
}

