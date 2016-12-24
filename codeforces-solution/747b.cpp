#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a,c,g,t;
    if(n%4!=0){
        cout << "===" << endl;
        return 0;
    }
    a=g=c=t=n/4;
    string s;
    cin >> s;
    vector<int> v;
    vector<char> ans;
    for(int i=0; i<n; i++){
        ans.push_back(s[i]);
        if(s[i]=='A'){
            a--;
        }
        else if(s[i]=='G'){
            g--;
        }
        else if(s[i]=='C'){
            c--;
        }
        else if(s[i]=='T'){
            t--;
        }
        else{
            v.push_back(i);
        }
    }
    if(a<0 || g<0 || c<0 || t<0){
        cout << "===" << endl;
        return 0;
    }
    int j=0;
    while(a--){
        ans[v[j]]='A';
        j++;
    }
    while(c--){
        ans[v[j]]='C';
        j++;
    }
    while(t--){
        ans[v[j]]='T';
        j++;
    }
    while(g--){
        ans[v[j]]='G';
        j++;
    }
    for(int i=0; i<n; i++){
        cout << ans[i];
    }
	return 0;
}
