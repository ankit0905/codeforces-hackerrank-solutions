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
    string a,b;
    cin >> a >> b;
    vector<int> v;
    int l=a.length();
    for(int i=0; i<l; i++){
        if(a[i]!=b[i]){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
    int sz=v.size();
    for(int i=0; i<sz; i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}
