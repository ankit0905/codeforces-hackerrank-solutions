#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

bool prime[1000003];
int n = 1000000;

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0]=prime[1]=false;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    sieve();
    long long int sum = 0;
    int n;
    cin >> n;
    for(int i=20; i<=n; i++){
        if(!prime[i]){
            continue;
        }
        int f=1;
        string str = to_string(i);
        int len = str.length();
        for(int i=1; i<=len; i++){
            string s1 = str.substr(0,i);
            string s2 = str.substr(i,len-i);
            int num1 = atoi(s1.c_str()), num2 = atoi(s2.c_str());
            //cout << num1 << " " << num2 << endl;
            if(!prime[num1]){
                f=0;
                break;
            }
            if(i!=len && !prime[num2]){
                f=0;
                break;
            }
        }
        if(f==1){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

