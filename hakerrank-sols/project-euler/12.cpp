#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> p[41041];
int ans[2001]={0};

int numofdivisors(int n){
    int square_root = (int)sqrt(n) + 1, ct=0;
    for (int i = 1; i < square_root; i++) { 
        if (n % i == 0 && i*i!=n)
            ct+=2;
        if (n % i == 0 && i*i==n)
            ct++;
    }
    return ct;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int max=0;
    for(int i=1; i<41041; i++){
        p[i].first=(i*(i+1))/2;
        p[i].second=numofdivisors(p[i].first);
        if(p[i].second>max){
            max=p[i].second;
            ans[p[i].second-1]=p[i].first;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n,i;
        cin >> n;
        i=n;
        while(true){
            if(ans[i]){
                cout << ans[i] << endl;
                break;
            }
            else{
                i++;
            }
        }
    }
    return 0;
}

