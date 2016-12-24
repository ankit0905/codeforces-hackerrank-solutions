#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int row[n+1], col[n+1];
    for(int i=0; i<=n; i++){
        row[i]=0;
        col[i]=0;
    }
    //cout << n << endl;
    long long int ans=0;
    long long int rc=0, cc=0;
    for(int i=0; i<m; i++){
        int r,c;
        cin >> r >> c;
        if(row[r]==0){
            rc++;
        }
        if(col[c]==0){
            cc++;
        }
        row[r]=1;
        col[c]=1;
        ans=(n-rc)*(n-cc);
        //cout << n-rc << " " << n-cc << endl;
        cout << ans << " ";
    }
    cout << endl;
    //long long int ans=rc*cc;
    //cout << ans << endl;
    return 0;
}
