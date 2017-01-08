#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,k,test,num;
    long int product1, product2, rev,rem, maxpalin;    
    scanf("%d", &test);
    for(i=0; i<test; i++){
        scanf("%d", &num);
        maxpalin=0;
        for(j=100; j<=999; j++){
            for(k=100; k<=999; k++){
                if((j*k)<num){
                    product1=j*k;
                    product2=j*k;
                    rev = 0;
                    rem = 0;
            
                    while(product1>0)
                    {
                        rem = product1%10;
                        rev = rev*10 + rem;
                        product1 = product1/10;
                    }
                    if(product2 == rev)
                    {       
                        if(maxpalin < product2)
                        {
                            maxpalin = product2;
                        }
                    }    
                }
            }
        }
        printf("%ld\n", maxpalin);
    }
    return 0;
}    


