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
    int i,p,ma = 1, ct = 0, ans[n+5];
    for(int j=1; j<=n+1; j++){
        prime[j] = 1;
        ans[j] = -1;
    } 
    for(i=2; i<=n+1; i++){
        //cout << "i = " << i << endl;
        if(prime[i] == 1){
            ct = 1;
            ans[i] = 1;
            //cout << "prime = > " << i << endl;
            for(p=2*i; p<=n+1; p+=i){
                prime[p] = 0;
                if(ans[p] == -1){
                    ans[p] = 2;
        			ma = 2;
        		}
            }
        }
    }
    cout << ma << endl;
    for(int i=2; i<=n+1; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
