#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int i,j,t,num,s,s1,s2;
    scanf("%lld", &t);
    for(i=0; i<t; i++){
        scanf("%lld", &num);
        s=0;
        s1=0;
        s2=0;
        for(j=1; j<=num; j++){
            s=s+j;
            s1=s1+(j*j);
        }
        s2=s*s;
        printf("%lld\n", (s2-s1));
    }
    return 0;
}

