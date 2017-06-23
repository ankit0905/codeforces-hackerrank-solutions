#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int check(int x, int y)
{
	if(x < 0)
		return 0;
	cout << 1 << " " << x << " " << y << endl;
	fflush(stdout);
	string str;
	cin >> str;
	if(str == "TAK")
		return 1;
	else
		return 0;
}

int find(int lo, int hi)
{
    if(lo > hi) return -1;
    string inp;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(check(mid,mid+1))
        	hi = mid;
    	else
    		lo = mid+1;
    }
    return lo;
}

int main()
{
    string s;
    int n, k;
    cin >> n >> k;
    int fi = find(1,n);
    int se = find(1,fi-1);
    if(check(se,fi) == 0)
    	se = find(fi+1,n);
	cout << 2 << " " << fi << " " << se << endl;
    return 0;
}
