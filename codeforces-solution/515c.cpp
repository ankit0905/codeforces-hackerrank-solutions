#include <bits/stdc++.h>

using namespace std;

#define ll long long

string ch[10]={"","","2","3","223","5","53","7","7222","7332"};

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> num;
    for(int i=0; i<n; i++){
        num.push_back(ch[s[i]-48]);
    }
    vector<char> s1;
    for(int i=0; i<n; i++){
        for(int j=0; j<num[i].length(); j++){
            s1.push_back(num[i][j]);
        }
    }
    sort(s1.rbegin(),s1.rend());
    for(int i=0; i<s1.size(); i++){
        cout << s1[i];
    }
    cout << endl;
    return 0;
}
