#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int> v1, v2;
    for(int i=0; i<=100; i++){
        int x = b+i*a;
        v1.push_back(x);
    }
    for(int i=0; i<=100; i++){
        int x = d+i*c;
        v2.push_back(x);
    }
    int ans = 100000000;
    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++){
            if(v1[i]==v2[j]){
                ans = min(ans, v1[i]);
            }
        }
    }
    if(ans >= 1000000){
        cout << "-1" << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}
