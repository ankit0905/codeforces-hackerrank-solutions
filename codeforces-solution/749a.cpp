#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << endl;
        for(int i=0; i<n/2; i++){
            cout << "2" << " ";
        }
        cout << endl;
    }
    else{
        cout << n/2 << endl;
        for(int i=1; i<n/2; i++){
            cout << "2" << " ";
        }
        cout << "3";
        cout << endl;
    }
	return 0;
}
