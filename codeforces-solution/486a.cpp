#include <iostream>
using namespace std;

int main()
{
	long long int n,m,ans=0;
	cin >> n;
	m=n;
	if(n%2!=0)
		n--;
	ans+=n/2;
	if(m%2!=0)
		ans-=m;
	cout << ans << endl;
	return 0;
}
