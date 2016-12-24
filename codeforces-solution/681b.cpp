#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a=1234, b=123456, c=1234567;
	int max=(n/c),k,ans=1;
	for(int i=0; i<=max; i++){
		int m=n-c*i;
		int max1=(m/b);
		for(int j=0; j<=max1; j++){
			if((m-j*b)%a==0){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
