#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int ct=0,max=0,ii,jj,kk;
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            for(int k=0; k<26; k++){
                int l;
                ct=0;
                for(l=0; l<n; l++){
                    int a=i+97,b=j+97,c=k+97;
                    int a1=ar[l]^a, b1=ar[l]^b, c1=ar[l]^c;
                    if(l%3==0){
                        if(a1>=32 && a1<=90 || a1>=97 && a1<=122){
                            continue;
                        }
                        else{
                            break;
                        }
                    }
                    if(l%3==1){
                        if(b1>=32 && b1<=90 || b1>=97 && b1<=122){
                            continue;
                        }
                        else{
                            break;
                        }
                    }
                    if(l%3==2){
                        if(c1>=32 && c1<=90 || c1>=97 && c1<=122){
                            continue;
                        }
                        else{
                            break;
                        }
                    }
                }
                if(l==n){
                    ii=i;
                    jj=j;
                    kk=k;
                    ct=-1;
                    break;
                }
            }
            if(ct==-1)
                break;
        }
        if(ct==-1)
            break;
    }
    cout << (char)(ii+97) << (char)(jj+97) << (char)(kk+97) << endl;
    return 0;
}

