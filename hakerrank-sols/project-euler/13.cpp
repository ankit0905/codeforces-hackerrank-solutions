#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int n1=n;
    vector<string> num;
    vector<char> ans;
    while(n1--){
        string s;
        cin >> s;
        num.push_back(s);
        //cout << s << endl;
    }    
    int sum,carry=0;
    for(int i=49; i>=0; i--){
        sum=carry;
        for(int j=0; j<n; j++){
            sum+=num[j][i]-48;
        }
        carry=sum/10;
        char ele=(char)(sum%10+48);
        //cout << ele << endl;
        if(i!=0){
            ans.push_back(ele);
            //cout << ele;
        }
    }
    //cout << endl;
    while(sum>0){
        int rem=sum%10;
        char ele=(char)(rem+48);
        //cout << ele;
        ans.push_back(ele);
        sum=sum/10;
    }
    //cout << endl;
    //cout << ans.size();
    int sz=ans.size();
    int i=sz-1, ct=0;
    while(ct<10){
        cout << ans[i];
        ct++;
        i--;
    }
    cout << endl;
    return 0;
}
