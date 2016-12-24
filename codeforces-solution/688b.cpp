#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	string s;
	cin >> s;
	cout << s;
	int len=s.length();
	for(int i=len-1; i>=0; i--){
		cout << s[i];
	}
	cout << endl;
	return 0;
}
