#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int t,a[100005]={0}, fl[100005]={0},ans[100005]={0};
	for(int i=1; i<=100000; i++){
		int max = (int)sqrt(i);
		long long int sum = 0;
		for(int j=1; j<=max; j++){
			if(i%j==0){
				int fact1 = j;
				int fact2 = i/j;
				if(fact1==fact2){
					sum += fact1;
				}
				else{
					if(fact1!=i){
						sum += fact1;
					}
					if(fact2!=i){
						sum += fact2;
					}
				}
			}
		}
		a[i] = sum;
		//cout << sum << endl;
	}
	a[1]=a[0]=0;
	for(int i=1; i<=100000; i++){
		if(a[i]<=100000 && i == a[a[i]] && a[i]!=i){
			fl[a[i]]=1;
			fl[i]=1;
			//cout << i << " " << a[i] << endl;
		}
	}
	ans[0]=0;
	for(int i=1; i<=100000; i++){
		if(fl[i]==1){
			ans[i]=ans[i-1]+i;
		}
		else{
			ans[i]=ans[i-1];
		}
	}
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ans[n] << endl;
	}
	return 0;
}

