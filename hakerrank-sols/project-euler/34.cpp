#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int fact(long long int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n,ct=0;
    cin >> n;
    for(int i=10; i<=n; i++){
        int m=i;
        //cout << i << " => ";
        long long int sum=0;
        while(m!=0){
            int rem=m%10;
            sum+=fact(rem);
            m=m/10;
            //cout << rem << " ";
        }
        //cout << endl;
        if(sum%i==0)
            ct+=i;
    }
    cout << ct << endl;
    return 0;
}

