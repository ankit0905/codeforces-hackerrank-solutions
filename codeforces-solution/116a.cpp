#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num=0,max=0;
	while(n--){
		int a, b;
		cin >> a >> b;
		num-=a;
		num+=b;
		if(max<num){
			max=num;
		}
	}
	cout << max << endl;
}
