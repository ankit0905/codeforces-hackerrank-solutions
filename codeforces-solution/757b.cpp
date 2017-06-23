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
    int x, fl[100005]={0}, prime[100005];
    for(int j=0; j<n; j++){
        cin >> x;
        fl[x]++;
    }
    for(int j=1; j<=100000; j++){
        prime[j] = 1;
    } 
    int i,p,ans = 1, ct = 0;
    for(i=2; i<=100000; i++){
        if(prime[i] == 1){
            ct = fl[i];
            for(p=2*i; p<=100000; p+=i){
                prime[p] = 0;
                ct += fl[p];
            }
            ans = max(ct, ans);
        }
    } 
    cout << ans << endl;
    return 0;
}
