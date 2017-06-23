#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int dp[5005]={0}, ct[5005], fl[5005];
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        ct[a[i]]++;
    }
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        int xorsum = 0, tot = 0;
        for(int j=0; j<=5000; j++){
            fl[j] = 0;
        }
        for(int j=i; j>=1; j--){
            if(fl[a[j]] == 0){
                fl[a[j]] = 1;
                xorsum ^= a[j];
                tot += ct[a[j]];
            }
            tot--;
            if(tot == 0){
                dp[i] = max(dp[i], xorsum+dp[j-1]);
            }
            else{
                dp[i] = max(dp[i], dp[j-1]);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
