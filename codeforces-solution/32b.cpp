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
    vector<int> v;
    for(int i=0; i<l; i++){
        if(s[i]=='.'){
            v.push_back(0);
        }
        else{
            if(s[i+1]=='.'){
                v.push_back(1);
                i++;
            }
            else{
                v.push_back(2);
                i++;
            }
        }
    }
    int sz=v.size();
    for(int i=0; i<sz; i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}
