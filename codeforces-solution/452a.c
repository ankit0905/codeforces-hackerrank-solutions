#include <stdio.h>
#include <string.h>

int main()
{
    int len,i,j;
    scanf("%d", &len);
    char str[9];
    char *s[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    scanf(" %s", str);
    int l=strlen(str);
    //printf("%s %d %d\n", str,len, l);
    for(i=0; i<8; i++){
        int flag=1;
        int len2=strlen(s[i]);
        //printf("len=%d, %d\n", len2, l);
        if(l==len2){
            for(j=0; j<l; j++){
                //printf("%c %c ", str[j], s[i][j]);
                if(str[j]!='.' && s[i][j]!=str[j]){
                    flag=0;
                    break;
                }
            }
        }
        else{
            flag=0;
        }
        if(flag==1){
            printf("%s\n", s[i]);
            return 0;
        }
    }
    return 0;
}
