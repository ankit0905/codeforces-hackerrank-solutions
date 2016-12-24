#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string str,s;
    cin >> s;
    int len=s.length();
    for(int i=0; i<len; i++){
        if(s[i]!='A' && s[i]!='a' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y'){
            str.push_back('.');
            str.push_back(tolower(s[i]));
        }
    }
    cout << str;
}
