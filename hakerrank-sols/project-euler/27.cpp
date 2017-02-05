#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}

int main() {
    int inp;
    cin >> inp;
    int primes[2005];
    int max = 0, curr = 0, ans1 = 0, ans2 = 0;
    for(int i=2; i<=2000; i++){
        if(isPrime(i)) primes[i]=1;
        else primes[i]=0;
    }
    int st=-1*inp, en=inp;
    for(int i=st; i<=en; i++){
        for(int j=2; j<=en; j++){
            if(primes[j]){
                //cout << i << " " << j << endl;
                for(int n=0; n<=j; n++){
                    curr = n*n + n*i + j;
                    if(isPrime(curr) && curr>1)
                        continue;
                    else{
                        if(max<n){
                            max=n;
                            ans1=i;
                            ans2=j;
                        }
                        break;
                    }
                }
            }
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}

