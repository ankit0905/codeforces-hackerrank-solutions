#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,idx;
    cin >> n >> m;
    int arr[n], p[n];
    for(int i=0; i<n; i++){
        cin >> p[i];
        arr[i] = p[i];
    }
    /*for(int i=0; i<n; i++){
        idx = -1;
        for(int j=0; j<i; j++){
            if(p[j] > p[i]){
                idx = j;
            }    
        }
        arr[i] = idx;
    }*/
    int fl[10005]={0};
    while(m--){
        int l,r,x;
        cin >> l >> r >> x;
        l--;
        r--;
        x--;
        for(int i=0; i<=n; i++){
            fl[i] = 0;
        }
        for(int i=l; i<=r; i++){
            fl[p[i]]=1;
        }
        idx = l;
        for(int i=1; i<=n; i++){
            if(fl[i] == 1){
                p[idx++] = i;
            }
        }
        if(arr[x] == p[x]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        for(int i=0; i<n; i++){
            p[i] = arr[i];
        }
    }
    return 0;
}
