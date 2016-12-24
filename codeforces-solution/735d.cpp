#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cstdio>

using namespace std;

int isprime(long long int n)
{
    if(n==2 || n==3)
        return 1;
    if(n==1 || n==0)
        return 0;
    int max=(int)sqrt(n);
    for(int i=2; i<=max; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    long long int n;
    cin >> n;
    long long int i,m=n,ans=0;
    if(isprime(n)){
        cout << "1" << endl;
    }
    else if(n%2==0){
        cout << "2" << endl;
    }
    else{
        if(isprime(n-2)){
            cout << "2" << endl;
        }
        else{
            cout << "3" << endl;
        }
    }
	return 0;
}
