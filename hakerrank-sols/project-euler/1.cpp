#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int t,n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        long long int sum=0;
        if(n<=3){
            printf("0\n");
            continue;
        }
        else if(n<=5){
            printf("3\n");
            continue;
        }
        long long int a=3, b=5, m=n-1;
        while(1){
            if(m%3==0){
                break;
            }
            m--;
        }
        sum+=3*((m/3)*(1+(m/3)))/2;
        m=n-1;
        while(1){
            if(m%5==0){
                break;
            }
            m--;
        }
        sum+=5*((m/5)*(1+(m/5)))/2;
        m=n-1;
        while(1){
            if(m%15==0){
                break;
            }
            m--;
        }
        sum-=15*((m/15)*(1+(m/15)))/2;
        printf("%lld\n", sum);
    }
    return 0;
}

