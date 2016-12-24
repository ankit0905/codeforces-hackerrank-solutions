#include <stdio.h>
#include <string.h>

void sort(char s[], int sz);

int main()
{
    char str[100], s[100];
    scanf("%s", str);
    int len=strlen(str), i,j=0;
    for(i=0; i<len; i++){
        if(str[i]!='+'){
            s[j++]=str[i];
        }
    }
    s[j]='\0';
    int k=0;
    //printf("%s\n", s);
    sort(s,j);
    for(i=0; i<len; i++){
        if(i%2!=0){
            str[i]='+';
        }
        else{
            str[i]=s[k];
            k++;
        }
    }
    printf("%s\n", str);
    //printf("%s\n", s);
    return 0;
}

void sort(char s[], int sz)
{
    int i,j;
    for(i=1; i<sz; i++){
        j=i;
        while(s[j]<s[j-1] && j>0){
            char temp=s[j];
            s[j]=s[j-1];
            s[j-1]=temp;
            j--;
        }
    }
}
