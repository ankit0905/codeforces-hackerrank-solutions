#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=malloc(sizeof(char)*101);
    scanf("%s",s1);
    char *s2=malloc(sizeof(char)*101);
    scanf(" %s", s2);
    char *str=malloc(sizeof(char)*101);
    scanf(" %s", str);
    //printf("%s %s %s\n", s1,s2,str);
    int len1=strlen(s1), len2=strlen(s2), len3=strlen(str);
    if(len1+len2!=len3){
        printf("NO\n");
        return 0;
    } 
    int count1[26]={0}, count2[26]={0}, i;
    for(i=0; i<len1; i++){
        char ch=s1[i];
        count1[ch-65]++;
    }
    for(i=0; i<len2; i++){
        char ch=s2[i];
        count1[ch-65]++;
    }
    for(i=0; i<len3; i++){
        char ch=str[i];
        count2[ch-65]++;
    }
    for(i=0; i<26; i++){
        if(count1[i]!=count2[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
