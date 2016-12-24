#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    int m=(int)sqrt(n);
    for(int i=m; i>=1; i--){
        if(n%i==0){
            a=i;
            b=n/i;
            break;
        }
    }
    if(a>b){
        swap(a,b);
    }
    cout << a << " " << b << endl;
	return 0;
}
