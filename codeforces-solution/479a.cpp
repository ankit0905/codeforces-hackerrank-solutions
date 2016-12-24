#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	vector<int> v;
	v.push_back(a*b*c);
	v.push_back(a+b+c);
	v.push_back(a*(b+c));
	v.push_back((a+b)*c);
	sort(v.rbegin(), v.rend());
	cout << v[0] << endl;
	return 0;
}
