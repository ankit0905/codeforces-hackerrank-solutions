#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
using namespace std;

long long int isprime(long long int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        int max=sqrt(n);
        for(int i=2; i<=max; i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    long long int i,n,m;
    cin >> n >> m;
    for(i=n+1; i!=0; i++){
        if(isprime(i)){
            break;
        }
    }
    if(i==m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
