#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,count, t,num;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &num);
        for(j=1; j<1000000; j++){
            count=0;
            for(k=1; k<=num; k++){
                if(j%k==0){
                    count++;
                }
                if(count==num){
                    printf("%d\n", j);
                    break;
                }
            }
            if(count==num){
                    
                    break;
                }
        }
    }        
}

