#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int n);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> primes;
    int i=0, ele=2;
    while(i<10001){
        if(isprime(ele)){
            primes.push_back(ele);
            ele++;
            i++;
        }
        else
            ele++;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}

int isprime(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        int hi=(int)sqrt(n);
        for(int i=2; i<=hi; i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
