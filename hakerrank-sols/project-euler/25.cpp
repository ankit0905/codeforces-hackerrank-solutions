#include <iostream>
#include <cmath>
using namespace std;

long long numberOfDigits(long long n)
{
    if (n == 1)
        return 1;
 
    // using phi = 1.6180339887498948
    long double d = (n * log10(1.6180339887498948)) -
                    ((log10(5)) / 2);
 
    return ceil(d);
}

int main()
{
	long long int ans[5005]={0};
	ans[1]=1;
	int j=2;
	for(int i=2; i<=100000; i++){
		if(numberOfDigits(i)==j){
			ans[j]=i;
			j++;
		}
		if(j==5001)
			break;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ans[n] << endl;
	}
	return 0;
}
