#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        int n,a[10000],m=1,temp=0,x,sum=0;
        cin >> n;
        a[0]=1;
        for(int i=1; i<=n; i++){
            for(int j=0; j<m; j++){
                x=a[j]*i+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0){
                a[m]=temp%10;
                temp=temp/10;
                m++;
            }
        }
        for(int i=m-1; i>=0; i--){
            sum+=a[i];
        }
        cout << sum << endl;
    }
    return 0;
}

