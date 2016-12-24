#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int max=0, ct=1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            ct++;
        }
        if(max<ct)
            max=ct;
        if(arr[i]<=arr[i-1]){
            ct=1;
        }
    }
    if(max<ct){
        max=ct;
    }
    cout << max << endl;
    return 0;
}
