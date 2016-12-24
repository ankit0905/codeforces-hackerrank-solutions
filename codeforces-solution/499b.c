#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    char words1[m][11];
    char words2[m][11];
    for(i=0; i<m; i++){
        scanf(" %s %s", words1[i], words2[i]);
        //printf("%s %s\n", words1[i], words2[i]);
    }
    char words[n][11];
    for(i=0; i<n; i++){
        scanf("%s", words[i]);
        //printf("%s ", words[i]);
        for(j=0; j<m; j++){
            if(strcmp(words[i], words1[j])==0){
                int len1=strlen(words1[j]);
                int len2=strlen(words2[j]);
                if(len1<=len2){
                    printf("%s ", words1[j]);
                }
                else{
                    printf("%s ", words2[j]);
                }
                break;
            }
        }
    }
    //printf(" %s %s\n", words[0], words[1]);
    printf("\n");
    return 0;
}
