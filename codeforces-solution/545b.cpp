#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    string s,t;
    cin >> s >> t;
    int len=s.length(), ct=0, flag=0;
    for(int i=0; i<len; i++){
        if(s[i]!=t[i])
            ct++;
    }
    if(ct%2==1)
        cout << "impossible" << endl;
    else{
        vector<char> p;
        for(int i=0; i<len; i++){
            if(s[i]==t[i]){
                cout << s[i];
            }
            else{
                if(flag==0){
                    flag=1;
                    cout << s[i];
                }
                else{
                    flag=0;
                    cout << t[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
