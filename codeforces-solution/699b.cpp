#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int a[n],b[m],ct=0;
    for(int i=0; i<n; i++){
        a[i]=0;
    }
    for(int i=0; i<m; i++){
        b[i]=0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='*'){
                ct++;
                a[i]++;
                b[j]++;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='*'){
                int tot=a[i]+b[j]-1;
                if(tot==ct){
                    cout << "YES" << endl;
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
            else{
                int tot=a[i]+b[j];
                if(tot==ct){
                    cout << "YES" << endl;
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
