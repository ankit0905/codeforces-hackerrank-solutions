#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int prime[1000001], n=1000000;

void SieveOfEratosthenes()
{
    for(int i=2; i<=n; i++){
        prime[i]=1;
    }
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == 1)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = 0;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    SieveOfEratosthenes();
    int num;
    cin >> num;
    vector<int> v;
    long long int ans=0;
    for(int i=2; i<num; i++){
        if(prime[i]==0)
            continue;
        int m=i,fl=1;
        while(m!=0){
            int rem=m%10;
            v.push_back(rem);
            m=m/10;
        }
        reverse(v.begin(), v.end());
        int sz=v.size();
        for(int i=0; i<sz; i++){
            int sum=0;
            for(int j=0; j<sz; j++){
                sum+=(v[(i+j)%sz]*pow(10,sz-1-j));
            }
            if(prime[sum]==0){
                fl=0;
                break;
            }
        }
        if(fl){
            ans+=i;
        }
        v.clear();
    }
    cout << ans << endl;
    return 0;
}

