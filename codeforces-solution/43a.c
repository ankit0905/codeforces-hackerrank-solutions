#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,ct1=1,ct2=0,flag=1;
    scanf("%d", &n);
    char str[11],str1[11],str2[11];
    scanf(" %s",str1);
    //printf("%s\n",str1);
    for(i=1; i<n; i++){
        scanf(" %s", str);
        if(strcmp(str,str1)!=0 && flag==1){
            strcpy(str2,str);
            flag=0;
        }
        if(strcmp(str,str1)==0){
            ct1++;
        }
    }
    ct2=n-ct1;
    if(ct1>ct2){
        printf("%s\n",str1); 
    }
    else{
        printf("%s\n", str2);
    }
    return 0;
}
