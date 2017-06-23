#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "";
    for(int i=0; i<n; i++){
        if(i%4 == 0 || i%4 == 1){
            str += 'a';
        }
        else{
            str += 'b';
        }
    }
    cout << str << endl;
    return 0;
}
