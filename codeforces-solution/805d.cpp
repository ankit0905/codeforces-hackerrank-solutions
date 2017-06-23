#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    long long int len = str.length(), ctb = 0, ans = 0;
    reverse(str.begin(),str.end());
    int m = 1000000007;
    for(int i=0; i<len; i++){
        if(str[i] == 'b'){
            ctb++;
        }    
        else{
            ans = (ans+ctb)%m;
            ctb = (ctb*2ll)%m;
        }
    }
    cout << ans%1000000007 << endl;
    return 0;
}
