#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int prime[1000006];
vector<long long int> pr;

long long int isprime(long long int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else{
        long long int maxi=sqrt(n);
        for(long long int i=2; i<=maxi; i++){
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(int i=0; i<=1000005; i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2; i*i<=1000005; i++){
        if(prime[i]==1){
            for(int j=i*2; j<=1000005; j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=0; i<=1000005; i++){
        if(prime[i]==1){
            pr.push_back(i);
        }
    }
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(isprime(n)){
            cout << n << endl;
            continue;
        }
        long long int maxi=sqrt(n),m=1;
        for(int i=2; i<=maxi; i++){
            if(n%i==0){
                if(isprime(i))
                    m=max(m,(long long int)i);
                long long int temp=n/i;
                if(isprime(temp)){
                    m=max(m,temp);
                }
            }
        }
        /*for(int i=0; i<=78498; i++){
            if(n%pr[i]==0){
                m=pr[i];
                long long int temp=n/pr[i];
                if(isprime(temp)){
                    m=max(m,temp);
                }
            }
            if(pr[i]>maxi){
                break;
            }
        }*/
        cout << m << endl;
    }
    return 0;
}
