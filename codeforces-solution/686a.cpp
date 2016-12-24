#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n,x;
    cin >> n >> x;
    pair<char, ll> p;
    ll ans=x, num=0;
    for(ll i=0; i<n; i++){
        cin >> p.first >> p.second;
        if(p.first=='+')
            ans+=p.second;
        else
            if(ans>=p.second)
                ans-=p.second;
            else
                num++;
    }
    cout << ans << " " << num << endl;
    return 0;
}
