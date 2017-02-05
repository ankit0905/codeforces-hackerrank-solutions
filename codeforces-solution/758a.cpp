#include <iostream>
using namespace std;

#define ll long long int

int main()
{
	int n;
	cin >> n;
	int a[n],max=0,ans=0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i]>max)
			max=a[i];
	}
	for(int i=0; i<n; i++){
		ans+=(max-a[i]);
	}
	cout << ans << endl;
	return 0;
}
