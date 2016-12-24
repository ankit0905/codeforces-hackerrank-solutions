#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int i,len=strlen(s);
    char ch=s[0];
    int count=1;
    for(i=1; i<len; i++){
        if(s[i]==ch){
            count++;
        }
        else{
            ch=s[i];
            count=1;
        }
        if(count==7){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
