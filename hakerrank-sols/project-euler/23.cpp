#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a[100005]={0}, fl[100005]={0}, ans[100005]={0};
	for(int i=1; i<=100000; i++){
		int max = (int)sqrt(i);
		int sum = 0;
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
	}
	a[0]=a[1]=0;
	vector<int> v;
	for(int i=2; i<=28122; i++){
		if(a[i] > i){
			fl[i]=1;
		}
		if(fl[i]==1){
			v.push_back(i);	
		}
	}
	int sz=v.size();
	for(int i=0; i<sz; i++){
		for(int j=0; j<sz; j++){
			int sum = v[i]+v[j];
			ans[sum]=1;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n>28123){
			cout << "YES" << endl;
		}
		else if(ans[n]==1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}

