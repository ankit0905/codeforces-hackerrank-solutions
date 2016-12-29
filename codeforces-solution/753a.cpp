#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int i=1,j=0;
    while(j+i<=n){
        j+=i;
        v.push_back(i);
        i++;
    }
    int diff=n-j;
    int sz = v.size();
    v[sz-1] += diff;
    cout << sz << endl;
    for(int k=0; k<sz; k++){
        cout << v[k] << " ";
    }
    cout << endl;
	return 0;
}
