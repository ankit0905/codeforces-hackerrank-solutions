#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int n,i;
    cin >> n;
    char str[n+2];
    string s;
    cin >> s;
    /*long long int len=s.length();
    for(i=0; i<len; i++){
        str[i+1]=s[i];
    }
    str[len]='\0';*/
    long long int arr[n+1];
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    long long int pos=0,ct=0;
    while(1){
        if(s[pos]=='>'){
            pos+=arr[pos];
            ct++;
        }
        else{
            pos-=arr[pos];
            ct++;
        }
        //cout << pos << endl;
        if(pos>n-1||pos<0){
            cout << "FINITE" << endl;
            return 0;
        }
        if(ct>4*n){
            break;
        }
    }
    cout << "INFINITE" << endl;
    return 0;
}
