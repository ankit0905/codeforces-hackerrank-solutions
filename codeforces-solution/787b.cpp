
By ankit0905, contest: Codeforces Round #406 (Div. 2), problem: (B) Not Afraid, Accepted, #
 #include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n+1], fl, ans = 1;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        fl = 1;
        for(int j=0; j<=n; j++){
            arr[j] = 0;
        }
        for(int j=0; j<x; j++){
            int y;
            cin >> y;
            int z = y;
            y = abs(y);
            if(z<0 && arr[y]==0){
                arr[y]=1;   
            }
            else if(z<0 && arr[y]==2){
                arr[y]=3;
            }
            else if(z>0 && arr[y]==0){
                arr[y]=2;
            }
            else if(z>0 && arr[y]==1){
                arr[y]=3;
            }
        }
        for(int j=0; j<=n; j++){
            if(arr[j]==3){
                fl = 0;
                break;
            }
        }
        if(fl == 1){
            ans = 0;
        }
    }
    if(ans == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
