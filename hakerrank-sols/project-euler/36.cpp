#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool ispalin(string str)
{
    int i=0,j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    long long int sum=0;
    for(int i=1; i<=n; i++){
        string num = to_string(i);
        if(!ispalin(num)){
            continue;
        }
        int j=i;
        vector<int> v;
        while(j>0){
            v.push_back(j%k);
            j=j/k;
        }
        num = "";
        int sz = v.size();
        for(int i=0; i<sz; i++){
            num.push_back((char)v[i]+48);
        }
        if(ispalin(num)){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

