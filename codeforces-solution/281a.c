#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    if(!isupper(str[0])){
        str[0]=toupper(str[0]);
    }
    printf("%s\n", str);
    return 0;
}
