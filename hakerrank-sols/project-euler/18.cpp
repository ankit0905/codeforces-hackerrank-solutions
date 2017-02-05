#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int> > v(15);

int solve(int i, int j,int n)
{
    if(i==n){
        return 0;
    }
    return (v[i][j]+max(solve(i+1,j,n),solve(i+1,j+1,n)));
}

int main() {l
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                int tmp;
                cin >> tmp;
                v[i].push_back(tmp);
            }
        }
        int sum = v[0][0];
        sum += max(solve(1,0,n),solve(1,1,n));
        cout << sum << endl;
        for(int i=0; i<15; i++){
            v[i].clear();
        }
    }
    return 0;
}

