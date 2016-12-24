#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    char ch[n+1][n+1];
    for(i=0; i<n; i++){
        scanf(" %s", ch[i]);
    }
    int max=0,j;
    for(i=0; i<n; i++){
        int ct=0;
        for(j=0; j<n; j++){
            if(strcmp(ch[i],ch[j])==0){
                ct++;
            }
        }
        if(ct>max){
            max=ct;
        }
    }
    printf("%d\n", max);
    return 0;
}
