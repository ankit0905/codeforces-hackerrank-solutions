#include <iostream>
using namespace std;

int main()
{
	long long int i,n,h,ans,x,curr,k;
	cin >> n >> h >> k;
	ans=0;
	curr=0;
	for(i=0; i<n; i++){
		cin >> x;
		if(curr+x<=h)
			curr+=x;
		else
			ans++, curr=x;
		ans+=curr/k;
		curr%=k;
	}
	ans+=curr/k;
	curr%=k;
	ans+=(curr>0);
	cout << ans << endl;
}
