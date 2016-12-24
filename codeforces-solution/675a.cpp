#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int diff=b-a;
	if((b<a && c>0) || (a<b && c<0))
		cout << "NO" << endl;
	else if((c==0&&a==b) || (c!=0 && diff%c==0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
