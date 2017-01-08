#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long int fact[14];
	fact[0]=1;
	for(int i=1; i<=13; i++){
		fact[i]=i*fact[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		long long int ans[14]={0};
		long long int n;
		cin >> n;
		long long int m=n,st=1,i=0;
		while(m>0){
			ans[i]=m%st;
			m=m/st;
			st++;
			i++;
		}
		for(int j=i-1; j>=0; j--){
			cout << ans[j];
		}
		cout << endl;
	}
	return 0;
}

