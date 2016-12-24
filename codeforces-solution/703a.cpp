#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m,c,ct1=0,ct2=0;
    while(n--){
        cin >> m >> c;
        if(m<c){
            ct2++;
        }
        else if(m>c){
            ct1++;
        }
    }
    if(ct1>ct2){
        cout << "Mishka" << endl;
    }
    else if(ct1<ct2){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
