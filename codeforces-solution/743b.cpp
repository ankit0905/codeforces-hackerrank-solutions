#include <iostream>
using namespace std;

int solve(long long int l, long long int r, long long int key, long long int n)
{
	long long int m = l + (r-l)/2LL;
	if(key < m)
		return solve(l,m-1,key,n-1);
	else if(key>m)
		return solve(m+1,r,key,n-1);
	else
		return n;
}

int main()
{
	long long int n,k,len=1;
	cin >> n >> k;
	for(int i=0; i<n-1; i++){
		len = len*2LL + 1LL;
	}
	cout << solve(1,len,k,n);
	return 0;
}
