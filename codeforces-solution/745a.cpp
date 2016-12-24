#include<iostream>
#include<set>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    set<string> s;
    s.insert(str);
    int l=str.length();
    for(int i=1; i<str.length(); i++){
        string s1="";
        for(int j=0; j<str.length(); j++){
            s1.push_back(str[(i+j)%l]);
        }
        s.insert(s1);
    }
    cout << s.size();
    return 0;
}
