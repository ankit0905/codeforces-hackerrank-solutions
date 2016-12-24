#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if((s[0]=='a'&&s[1]=='1') || (s[0]=='a'&&s[1]=='8') || (s[0]=='h'&&s[1]=='1') || (s[0]=='h'&&s[1]=='8')){
        cout << "3" << endl;
    }
    else if(s[0]=='a' || s[0]=='h'){
        if(s[1]>='2' && s[1]<='7'){
            cout << "5" << endl;
        }
        else{
            cout << "8" << endl;
        }
    }
    else{
        if(s[1]=='1' || s[1]=='8')
            cout << "5" << endl;
        else
            cout << "8" << endl;
    }
    return 0;
}
