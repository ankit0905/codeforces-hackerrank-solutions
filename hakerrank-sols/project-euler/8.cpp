#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    long long int t,n,k;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> k;
        cin >> s;
        long long int prod=1, max=0;
        for(int j=0; j<n-k; j++){
            prod=1;
            for(int j1=0; j1<k; j1++){
                int term=s[j+j1]-48;
                prod=prod*term;
            }
            if(prod>max){
                max=prod;
            }
        }
        cout << max << endl;
    }
    return 0;
}

