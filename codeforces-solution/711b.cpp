#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n][n];
    long long int er,ec;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]==0){
                er=i;
                ec=j;
            }
        }
    }
    long long int sum=0, x;
    if(n==1){
        cout << "1" << endl;
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            if(i==er){
                continue;
            }
            else{
                for(int j=0; j<n; j++){
                    sum+=a[i][j];
                }
                break;
            }
        }
        long long int s=0;
        for(int i=0; i<n; i++){
            s+=a[er][i];
        }
        x=sum-s;
        if(x<=0){
            cout << "-1" << endl;
            return 0;
        }
        else{
            a[er][ec]=x;
        }
    }
    for(int i=0; i<n; i++){
        long long int temp_sum=0;
        for(int j=0; j<n; j++){
            temp_sum+=a[i][j];
        }
        if(temp_sum!=sum){
            cout << "-1" << endl;
            return 0;
        }
    }
    for(int i=0; i<n; i++){
        long long int temp_sum=0;
        for(int j=0; j<n; j++){
            temp_sum+=a[j][i];
        }
        if(temp_sum!=sum){
            cout << "-1" << endl;
            return 0;
        }
    }
    long long int d1=0,d2=0;
    for(int i=0; i<n; i++){
        d1+=a[i][i];
        d2+=a[i][n-i-1];
    }
    if(d1==sum && d2==sum){
        cout << x << endl;
        return 0;
    }
    else{
        cout << "-1" << endl;
        return 0;
    }
    return 0;
}
