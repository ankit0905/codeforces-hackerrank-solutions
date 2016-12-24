#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
    vector<int> odd, even;
    for(int i=1; i<=n*n; i++){
        if(i%2==0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    int idx=(n-1)/2, ct=1;
    for(int i=0; i<=n/2; i++){
        int j=idx,k=0;
        while(k<ct){
            a[i][j]=1;
            k++;
            j++;
        }
        idx--;
        ct+=2;
    }
    ct=n-2, idx=1;
    for(int i=1+n/2; i<n; i++){
        int j=idx,k=0;
        while(k<ct){
            a[i][j]=1;
            k++;
            j++;
        }
        idx++;
        ct-=2;
    }
    
    int sz1=even.size(), sz2=odd.size();
    int l=0,m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==0){
                a[i][j]=even[l++];
            }
            else{
                a[i][j]=odd[m++];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
