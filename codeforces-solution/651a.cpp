//greedy solution
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a1,a2;
	cin >> a1 >> a2;
	if(a1 > a2)
		swap(a1,a2);
	int fl = 1, ct = 0;
	while(true){
		if(a1 == 2 && a2 == 2){
			ct++;
			break;
		}
		if(a1 <=1 && a2 <= 1){
			break;
		}
		if(a1 <= 2){
			fl = 1;
		}
		else if(a2 <= 2){
			fl = 2;
		}
		if(a1 <=0 || a2 <=0)
			break;
		if(fl==1){
			a1++;
			a2-=2;
		}
		else{
			a2++;
			a1-=2;
		}
		ct++;
	}
	cout << ct << endl;
	return 0;
}

