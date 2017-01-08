#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<pair<string, int> > names(n);
    for(int i=0; i<n; i++){
        cin >> names[i].first;
        names[i].second=0;
        int len=(names[i].first).length();
        for(int j=0; j<len; j++){
            names[i].second+=(names[i].first)[j]-64;
        }
    }
    sort(names.begin(), names.end());
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s.compare(names[i].first)==0){
                cout << (i+1)*names[i].second << endl;
                break;
            }
        }
    }
    return 0;
}

