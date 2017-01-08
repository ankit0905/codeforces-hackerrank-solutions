#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int sum1=0,sum2=0,sum3=0,sum4=0;
    vector<int> v;
    for(int i=10; i<=600000; i++){
        int m=i;
        while(m>0){
            int rem = m%10;
            m = m/10;
            v.push_back(rem);
        }
        int sz = v.size();
        long long int s1=0,s2=0,s3=0,s4=0;
        for(int j=0; j<sz; j++){
            s1 += pow(v[j],3);
            s2 += pow(v[j],4);
            s3 += pow(v[j],5);
            s4 += pow(v[j],6);
        }
        if(s1==i){
            sum1 += i;
        }
        if(s2==i){
            sum2 += i;
        }
        if(s3==i){
            sum3 += i;
        }
        if(s4==i){
            sum4 += i;
        }
        v.clear();
    }
    int n;
    cin >> n;
    if(n==3){
        cout << sum1 << endl;
    }
    else if(n==4){
        cout << sum2 << endl;
    }
    else if(n==5){
        cout << sum3 << endl;
    }
    else{
        cout << sum4 << endl;
    }
    return 0;
}

