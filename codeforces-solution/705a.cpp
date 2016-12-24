#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1)
        cout << "I hate it" << endl;
    else{
        int p=1;
        for(int i=0; i<n; i++){
            if(i!=n-1){
                if(p==1){
                    cout << "I hate that ";
                }
                else{
                    cout << "I love that ";
                }
            }
            else{
                if(p==1){
                    cout << "I hate it" << endl;
                }
                else{
                    cout << "I love it" << endl;
                }
            }
            if(p==1){
                p=0;
            }
            else{
                p=1;
            }
        }
    }
    return 0;
}
