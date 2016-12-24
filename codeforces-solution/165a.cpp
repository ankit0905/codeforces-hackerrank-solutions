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
    int n,k;
    cin >> n;
    int a[2001][2001];
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            a[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        x+=1000;
        y+=1000;
        a[x][y]=1;
    }
    int ct=0;
    for(int i=0; i<=2000; i++){
        for(int j=0; j<=2000; j++){
            if(a[i][j]==0)
                continue;
            for(k=0; k<i; k++){
                if(a[k][j]==1)
                    break;
            }
            if(k==i)
                continue;
            for(k=i+1; k<=2000; k++){
                if(a[k][j]==1)
                    break;
            }
            if(k==2001)
                continue;
            for(k=0; k<j; k++){
                if(a[i][k]==1)
                    break;
            }
            if(k==j)
                continue;
            for(k=j+1; k<=2000; k++){
                if(a[i][k]==1)
                    break;
            }
            if(k==2001)
                continue;
            ct++;
        }
    }
    cout << ct << endl;
    return 0;
}
