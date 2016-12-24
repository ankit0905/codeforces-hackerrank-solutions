#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,len;
    scanf("%d", &t);
    char s[100];
    for(i=0; i<t; i++){
        scanf("%s", &s);
        len=strlen(s);
        if(len>10){
            printf("%c%d%c\n", s[0], len-2, s[len-1]);
        }
        else{
            printf("%s\n", s);
        }
    }
    return 0;
}
