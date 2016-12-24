#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int i=0;
	while(true){
		n--;
		i++;
		if(i%m==0){
			n++;
		}
		if(n==0)
			break;
	}
	cout << i << endl;
	return 0;
}
