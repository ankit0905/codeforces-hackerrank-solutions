#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n], sum[n], cnt[n], s[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i == 0)
            sum[i] = arr[i];
        else
            sum[i] = sum[i-1]+arr[i];
    }
    long long int tot = sum[n-1];
    if(n <= 2 || tot % 3 != 0){
        cout << 0 << endl;
        return 0;
    }
    tot = tot/3;
    for(int i=n-1; i>=0; i--){
        if(i == n-1){
            s[i] = arr[i];
            if(s[i] == tot){
                cnt[i] = 1;
            }
            else{
                cnt[i] = 0;
            }
        }
        else{
            s[i] = s[i+1]+arr[i];
            if(s[i] == tot){
                cnt[i] = 1;
            }
            else{
                cnt[i] = 0;
            }
        }
    }
    for(int i=n-1; i>=0; i--){
        if(i==n-1){
            s[i] = cnt[i];
        }
        else{
            s[i] = s[i+1]+cnt[i];
        }
    }
    long long int ans = 0;
    for(int i=0; i<n-2; i++){
        if(sum[i] == tot){
            ans+=s[i+2];
        }
    }
    cout << ans << endl;
    return 0;
}
