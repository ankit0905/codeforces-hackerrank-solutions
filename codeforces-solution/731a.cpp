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
    string s;
    cin >> s;
    int l=s.length();
    int curr=0,ans=0;
    for(int i=0; i<l; i++){
        int temp=s[i]-97;
        if(abs(temp-curr)<(26-abs(temp-curr))){
            ans+=abs(curr-temp);
            curr=temp;
        }
        else{
            ans+=26-abs(curr-temp);
            curr=temp;
        }
    }
    cout << ans << endl;
    return 0;
}
