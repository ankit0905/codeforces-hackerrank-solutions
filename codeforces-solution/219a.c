#include <stdio.h>
#include <string.h>

int main()
{
    int k, i,j,count[26]={0};
    scanf("%d", &k);
    char str[1001], s[1001], s1[1001];
    scanf(" %s", str);
    int len=strlen(str);
    for(i=0; i<len; i++){
        count[str[i]-97]++;
    }
    for(i=0; i<26; i++){
        //printf("%d ", count[i]);
        if(count[i]%k!=0 && count[i]!=0){
            printf("-1\n");
            return 0;
        }
    }
    int k1=0;
    for(i=0; i<26; i++){
        for(j=0; j<(count[i]/k); j++){
            s[k1]=(char)(i+97);
            s1[k1]=s[k1];
            k1++;
        }
    }
    s[k1]='\0';
    s1[k1]='\0';
    for(i=0; i<k-1; i++){
        strcat(s,s1);
    }
    printf("%s\n", s);
    return 0;
}
