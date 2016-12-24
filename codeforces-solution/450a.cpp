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
    long long int n,m;
    cin >> n >> m;
    long long int a[n+1];
    vector<int> v;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    queue<pair<long long int, long long int> > q;
    for(int i=1; i<=n; i++){
        q.push({i,0});
    }
    pair<long long int, long long int> p;
    while(q.size()!=0){
        p=q.front();
        q.pop();
        if(p.second+m>=a[p.first]){
            v.push_back(p.first);
            continue;
        }
        else{
            q.push(make_pair(p.first,p.second+m));
        }
    }
    cout << v[n-1] << endl;
    return 0;
}
