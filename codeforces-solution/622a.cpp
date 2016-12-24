#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int count=0, i=1;
    while(1)
    {
        count+=i;
        if(count>n){
            count=count-i;
            break;
        }
        i++;
    }
    if(count==n){
        cout << i-1 << endl;
    }
    else{
        count++;
        long long int term=1;
        while(count<n){
            term++;
            count++;
        }
        cout << term << endl;
    }
}
