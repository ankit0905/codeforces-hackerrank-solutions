#include <iostream>
using namespace std;

int main()
{
	long long int k,n,w,sum=0;
	cin >> k >> n >> w;
	for(long long int i=1; i<=w; i++){
		sum+=i*k;
	}
	if(sum-n>=0)
		cout << sum-n << endl;
	else{
		cout << "0" << endl;
	}
	return 0;
}
