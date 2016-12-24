#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int len=strlen(str);
    int count=0,i,flag=0;
    for(i=0; i<len; i++){
        if(isupper(str[i])){
            count++;
        }
    }
    //printf("%s\n", str);
    //printf("%d %d\n",len, count);
    if(islower(str[0])){
        flag=1;
    }
    if((count==len) || ((count==len-1) && flag==1)){
        for(i=0; i<len; i++){
            if(islower(str[i])){
                str[i]=toupper(str[i]);
            }
            else{
                str[i]=tolower(str[i]);
            }
        }
    }
    printf("%s\n", str);
    return 0;
}
