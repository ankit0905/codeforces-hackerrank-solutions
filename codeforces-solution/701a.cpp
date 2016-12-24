#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr, arr+n);
    for(int i=0; i<n/2; i++){
        cout << arr[i].second << " " << arr[n-i-1].second << endl;
    }
    return 0;
}
