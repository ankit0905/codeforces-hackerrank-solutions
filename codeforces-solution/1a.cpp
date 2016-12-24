#include <iostream>
using namespace std;

int main() {
    // your code goes here
    long long int n,m,a;
    cin >> n >> m >> a;
    long long int c1=n/a, c2=m/a;
    if(n%a!=0){
        c1++;
    }
    if(m%a!=0){
        c2++;
    }
    cout << c1*c2;
}
