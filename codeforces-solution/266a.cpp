#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,ct=0;
	string s;
	cin >> n;
	cin >> s;
	for(int i=0; i<n-1; i++){
		if(s[i]==s[i+1]){
			ct++;
		}
	}
	cout << ct << endl;
	return 0;
}
