#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1 || n==2){
        cout << "1" << endl;
        return 0;
    }
    int sum=0, one=1,two=0,ct=0;
    while(sum<n){
        if(one==1){
            sum+=1;
            one=0;
            two=1;
        }
        else{
            sum+=2;
            one=1;
            two=2;
        }
        ct++;
        if(sum==n){
            cout << ct << endl;
            return 0;
        }
    }
    int sum1=0, one1=0,two1=1,ct1=0;
    while(sum1<n){
        if(one1==1){
            sum1+=1;
            one1=0;
            two1=1;
        }
        else{
            sum1+=2;
            one1=1;
            two1=0;
        }
        ct1++;
        if(sum1==n){
            cout << ct1 << endl;
            return 0;
        }
    }   
    return 0;
}
