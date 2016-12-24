#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5], sum=0, sum1=0;
    for(int i=0;i<5;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    //cout << sum << endl;
    sort(arr, arr+5);
    int ct=1, max=0;
    for(int i=1; i<5; i++){
        if(arr[i]==arr[i-1]){
            if(ct<3)
                ct++;
            sum1=arr[i];
        }
        else{
            sum1=sum1*ct;
            if(sum1>max && ct>1){
                max=sum1;
            }
            ct=1;
            sum1=0;
        }
        //cout << arr[i] << " "<< sum1 << " "<< ct << endl;
    }
    sum1=sum1*ct;
    if(sum1>max && ct>1){
        max=sum1;
    }
    ct=1;
    sum1=0;
    cout << sum-max << endl;
    return 0;
}
