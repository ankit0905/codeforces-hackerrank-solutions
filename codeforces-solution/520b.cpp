#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int> > v(10005);
int flag[10005]={0}, dist[10005]={0};

void init()
{
    for(int i=1; i<=5002; i++){
        v[i].push_back(2*i);
        v[i].push_back(i-1);
    }
    for(int i=5003; i<=10004; i++){
        v[i].push_back(i-1);
    }
}

int main()
{
    init();
    int n,m,f=0;
    cin >> n >> m; 
    int start=n;
    flag[start]=1;
    dist[start]=0;
    queue<int> q;
    q.push(start);
    while(q.size()!=0){
        int node=q.front();
        q.pop();
        int sz=v[node].size();
        for(int i=0; i<sz; i++){
            if(flag[v[node][i]]==0){
                flag[v[node][i]]=1;
                dist[v[node][i]]=dist[node]+1;
                q.push(v[node][i]);
                if(v[node][i]==m){
                    cout << dist[v[node][i]] << endl;
                    f=1;
                    break;
                }
            }
        }
        if(f)
            break;
    }
}
