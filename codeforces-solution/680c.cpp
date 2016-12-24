#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char s[3];
    int primes[15]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int i=0, ele, j=0, ct=0, flag=0;
    while(i<20){
        if(flag==0)
            ele=primes[j];
        printf("%d\n", ele);
        fflush(stdout);
        scanf(" %s", s);
        if(strcmp(s,"yes")==0){
            ct++;
            if(ele*ele<=100){
                ele=ele*ele;
                flag=1;
            }
            else{
                j++;
            }
        }     
        else{
            j++;
            flag=0;
        }
        if(ct>=2){
            cout << "composite" << endl;
            fflush(stdout);
            return 0;
        }
        i++;
        if(j==15){
            break;
        }
    }
    if(ct<2){
        cout << "prime" << endl;
        fflush(stdout);
    }
    return 0;
}
