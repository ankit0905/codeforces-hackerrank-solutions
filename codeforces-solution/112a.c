#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s %s", s1, s2);
    int i;
    int len1=strlen(s1), len2=strlen(s2);
    for(i=0; i<len1; i++){
        s1[i]=tolower(s1[i]);
    }
    for(i=0; i<len1; i++){
        s2[i]=tolower(s2[i]);
    }
    if(strcmp(s1,s2)>0){
        printf("1\n");
    }
    else if(strcmp(s1,s2)==0){
        printf("0\n");
    }
    else{
        printf("-1\n");
    }
    return 0;
}
