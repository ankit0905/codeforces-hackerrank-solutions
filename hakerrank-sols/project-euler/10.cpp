#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int n);

int main() {
    int fla, t;
    cin >> t;
    long int n;
    long int arr[1000001];
    long int sum[1000001];
    arr[0]=0;
    arr[1]=0;
    sum[0]=0;
    sum[1]=0;
    for(int i=2;i<=1000000;i++)
    {
		if(isprime(i))
		{
			sum[i]=sum[i-1]+i;
		}
		else{
            sum[i]=sum[i-1];
		}
    }
    while(t--)
    {
       cin >> n;
       cout << sum[n] << endl;
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
