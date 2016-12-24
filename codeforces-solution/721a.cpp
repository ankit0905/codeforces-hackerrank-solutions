#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ct=0;
    vector<int> v;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            ct++;
        }
        else{
            if(ct>0)
                v.push_back(ct);
            ct=0;
        }
    }
    if(s[n-1]=='B'){
        v.push_back(ct);
    }
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
