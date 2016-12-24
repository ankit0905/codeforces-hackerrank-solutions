#include <iostream>
using namespace std;

int calc(int ele, int a)
{
    int ct=0;
    while(ele>a){
        ele=ele/2;
        //cout << ele << " ";
        ct++;
    }
    ct+=a-ele;
    return ct;
}

int main()
{
    int n,b,d;
    cin >> n >> b >> d;
    int a[n], ct=0, ans=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>b){
            continue;
        }
        else{
            ct+=a[i];
            if(ct>d){
                ct=0;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
