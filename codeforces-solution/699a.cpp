#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    pair<int, char> point[n];
    for(int i=0; i<n; i++){
        point[i].first=a[i];
        point[i].second=s[i];
    }
    sort(point, point+n);
    int min=INT_MAX, p=0;
    for(int i=0; i<n-1; i++){
        if(point[i].second=='R' && point[i+1].second=='L'){
            if(point[i+1].first-point[i].first<min){
                min=point[i+1].first-point[i].first;
            }
            p=1;
        }
    }
    if(p==0){
        cout << "-1" << endl;
    }
    else
        cout << min/2 << endl;
    return 0;
}
