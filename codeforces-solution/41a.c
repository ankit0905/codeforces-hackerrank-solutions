#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    char revstr[101];
    int len=strlen(str1), i,j;
    for(i=len-1,j=0; i>=0&&j<len; i--,j++){
        revstr[j]=str1[i];
    }
    //printf("%s %s\n", str2, revstr);
    revstr[j]='\0';
    if(strcmp(revstr,str2)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
