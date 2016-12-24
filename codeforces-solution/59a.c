//CASE CHANGE OF WORDS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int len=strlen(str), i,count=0;
    
    //count for number of uppercase letters
    for(i=0; i<len; i++){
        if(isupper(str[i])){
            count++;
        }
    }
    
    //check if number of upper or lowercase letters are greater
    if(count>(len-count)){
        for(i=0; i<len; i++){
            str[i]=toupper(str[i]);
        }   
    }
    else{
        for(i=0; i<len; i++){
            str[i]=tolower(str[i]);
        } 
    }

    printf("%s\n", str);
    return 0;
}
