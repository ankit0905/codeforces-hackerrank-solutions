#include <iostream>
using namespace std;

int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	if(a==b || s[a-1]==s[b-1]){
		cout << "0" << endl;
	}
	else{
		cout << "1" << endl;
	}
	return 0;
}
