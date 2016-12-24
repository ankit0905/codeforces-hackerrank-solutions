#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n], pos=1, i=1;
    while(i<n){
        cin >> arr[i];
        i++;
    }
    i=1;
    while(i<n){
        if(t==pos){
            cout << "YES" << endl;
            return 0;
        }
        else if(pos>t){
            cout << "NO" << endl;
            return 0;
        }
        pos=pos+arr[i];
        i=pos;
    }
    if(t==pos){
        cout << "YES" << endl;
        return 0;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    
    return 0;
}
