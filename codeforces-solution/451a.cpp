//GAME WITH STICKS - 451A
#include <iostream>
using namespace std;

int calc(int n,int m);

int main()
{
	int n,m;
	cin >> n >> m;
	int ans = calc(n,m);
	//cout << ans << endl;
	if(ans%2==1)
		cout << "Akshat" << endl;
	else
		cout << "Malvika" << endl;
	return 0;
}

int calc(int n,int m)
{
	if(n==1 || m==1)
		return 1;
	else
		return ((calc(n-1,m-1))^1);
}
