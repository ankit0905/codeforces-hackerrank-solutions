#include <stdio.h>
#include <string.h>

int main()
{
    char str[102];
    scanf("%s", str);
    int len=strlen(str), i=0,j=0;
    char ele[]={'h','e','l','l','o'};
    while(i<len){
        if(str[i]==ele[j]){
            j++;
        }
        if(j==5){
            printf("YES\n");
            return 0;
        }
        i++;
    }
    printf("NO\n");
    return 0;
}
