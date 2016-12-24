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
    int n;
    cin >> n;
    //cout << n << endl;
    if(n%2==1){
        cout << "-1" << endl;
    }
    else{
        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            v[i]=i;
        }
        for(int i=1; i<=n; i+=2){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
        for(int i=1; i<=n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
