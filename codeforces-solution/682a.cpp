#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define lli long long int

int main()
{
	lli n, m, i, ans=0;
	cin >> n >> m;
	for(i=1; i<=n; i++){
		lli ele1,diff, ele=i%5;
		if(ele!=0)
			ele1=5-ele;
		else
			ele1=5;
		if(ele1<=m)
			ans++;
		diff=m-ele1;
		ans+=(diff)/5;
	}
	cout << ans << endl;
	return 0;
}
