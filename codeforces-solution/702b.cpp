#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long int power[33];
    for(int i=0; i<=32; i++){
        power[i]=(long long int)pow(2,i);
    }
    long long int ct=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=33; j++){
            if(power[j]<a[i])
                continue;
            long long int x=power[j]-a[i];
            //if(binary_search(a.begin(), a.end(), x)){
                long long int m;
                long long int lo=(int)(upper_bound(a.begin()+i+1, a.end(), x)-lower_bound(a.begin()+i+1, a.end(), x));
                m=lo;
                //cout << "m=" << m << endl;
                ct+=m;
            //}
            //cout << "i=" << i << " " << "j=" << j << " " << "ct=" << ct << "   "<<  "x=" << x << endl;
            //cout << a[i] << " " << power[j] << endl;
            //cout << endl;
        }
    }
    cout << ct << endl;
    return 0;
}
