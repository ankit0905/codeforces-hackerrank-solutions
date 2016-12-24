#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int check(long long int a)
{
    if(a==0){
        return 0;
    }
    if(a<0){
        a=a*-1;
    }
    long long int b=a;
    while(b>0){
        int rem = b%10;
        if(rem==8){
            return 1;
        }
        b=b/10;
    }
    return 0;
}

int main()
{
	long long int i,a;
	cin >> a;
	for( i=a+1; i<=a+200; i++){
	    if(check(i)){
	        break;
	    }
	}
	cout << i-a << endl;
	return 0;
}
