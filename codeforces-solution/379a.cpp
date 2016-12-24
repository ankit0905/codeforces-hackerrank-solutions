#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int ct=0, curr=0;
	while(a>0){
		a--;
		ct++;
		curr++;
		if(curr==b){
			curr=0;
			a++;
		}
	}
	cout << ct << endl;
	return 0;
}
