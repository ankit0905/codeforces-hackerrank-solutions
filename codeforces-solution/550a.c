#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    int len=strlen(str), i, flag[3]={0}, ct1=0;
    //printf("%s\n", str);
    for(i=0; i<len-1; i++){
        if((str[i]=='A' && str[i+1]=='B' && str[i+2]=='A') || (str[i]=='B' && str[i+1]=='A' && str[i+2]=='B')){
            i+=2;
            ct1++;
            flag[2]=1;
        }
        else if(str[i]=='A' && str[i+1]=='B'){
            flag[0]=1;
            i++;
        }
        else if(str[i]=='B' && str[i+1]=='A'){
            flag[1]=1;
            i++;
        }
        //printf("%d ", i);
    }
    int ct=0;
    for(i=0; i<3; i++){ 
        //printf("%d ", flag[i]);
        if(flag[i]==1){
            ct++;
        }
    }    
    if(ct>=2 || ct1>=2){
        printf("YES\n");
    }
    else{
    printf("NO\n");
    }
    return 0;
}
