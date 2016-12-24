#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int n,k,ans;
	cin >> n >> k;
	long long int half=(long long int)ceil((double)n/2);
	if(k<=half)
		ans=2*k-1;
	else{
		k=k-half;
		ans=2*k;
	}
	//cout << k << half << endl;
	cout << ans << endl;
	return 0;
}
