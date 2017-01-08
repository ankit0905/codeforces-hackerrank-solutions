#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
    int t;
    long long int i,j,num;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%lld", &num);
        long long int a=0, b=2, c=0, sum=0;
        while(1){
           c=a+4*b;
           if(c>num){
               break;
           }
           sum+=c; 
           a=b;
           b=c; 
        }
        printf("%lld\n", sum+2);
    }
    return 0;
}
