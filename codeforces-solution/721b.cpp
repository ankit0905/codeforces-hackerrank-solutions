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
    int n,k;
    cin >> n >> k;
    int best,worst;
    vector<pair<int,string> > v;
    int max_len=0;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        int l=a.length();
        v.push_back(make_pair(l,a));
    }
    int count=0;
    sort(v.begin(),v.end());
    
    string pass;
    cin >> pass;
    int pl=pass.length();
    for(int i=0; i<n; i++){
        if(v[i].first==pl){
            count++;
        }
    }
    int ct=0,ans=0,f=0;
    for(int i=0; i<n; i++){
        if(v[i].first!=pl){
            ct++;
            ans++;
            if(ct==k){
                ans+=5;
                ct=0;
            }
        }
        else{
            if(f==0){
                best=ans+1;
                f=1;
            }
            if(count==1){
                worst=ans+1;
                break;
            }
            else{
                ct++;
                ans++;
                if(ct==k){
                    ans+=5;
                    ct=0;
                }
                count--;
            }
        }
    }
    cout << best << " " << worst << endl;
    return 0;
}
