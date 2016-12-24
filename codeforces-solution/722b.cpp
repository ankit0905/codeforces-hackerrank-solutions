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
    int n;
    cin >> n;
    string s;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        int ct=0;
        if(i==0)
            cin.ignore(); 
        getline(cin, s);
        //cout << s << endl;
        int j=s.length();
        for(int k=0; k<j; k++){
            char c=s[k];
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
                ct++;
        }
        v.push_back(ct);
        //cout << ct << endl;
    }
    for(int i=0; i<n; i++){
        if(a[i]!=v[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
