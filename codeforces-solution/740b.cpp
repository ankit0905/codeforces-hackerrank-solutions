#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int n,m,ans=0;
	cin >> n >> m;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	while(m--){
		int s=0,l,r;
		cin >> l >> r;
		for(int i=l-1; i<r; i++){
			s+=a[i];
		}
		if(s>0)
			ans+=s;
	}
	cout << ans << endl;
	return 0;
}
