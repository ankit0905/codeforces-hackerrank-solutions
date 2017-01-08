#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int ans[501][501];

long long int findans(long long int n, long long int m)
{
    if(ans[n][m]!=0)
        return ans[n][m];
    else
        return ans[n][m]=findans(n-1,m)%1000000007+findans(n,m-1)%1000000007;
}

void init()
{
    for(int i=0; i<501; i++){
        for(int j=0; j<501; j++){
            ans[i][j]=0;
            if(i==0||j==0)
                ans[i][j]=1;
        }
    }
    ans[1][1]=2;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    init();
    cin >> t;
    while(t--){
        long long int n, m;
        cin >> n >> m;
        cout << findans(n,m)%1000000007 << endl;
    }
    return 0;
}

