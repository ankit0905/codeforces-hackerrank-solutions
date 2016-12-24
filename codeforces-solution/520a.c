//PANAGRAM
#include <stdio.h>
#include <string.h>

int main()
{
    int len, i,count[26]={0};
    scanf("%d ", &len);         
    char str[len+1];
    scanf("%s", str);
    
    //check for atleast 26 characters
    if(len<26){                 
        printf("NO\n");
        return 0;
    }
    
    //frequency array
    for(i=0; i<len; i++){        
        char ch=str[i];
        if((int)ch>96){
            count[ch-97]++;
        }
        else{
            count[ch-65]++;
        }
    }
    
    //Check for any 0 in frequency array
    for(i=0; i<26; i++){        
        if(count[i]==0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
