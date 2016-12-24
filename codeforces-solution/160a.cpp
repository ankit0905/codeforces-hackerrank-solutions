#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,sum=0,sum1=0;
	cin >> n;
	int i,arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum+=arr[i];
	}
	sort(arr, arr+n);
	for(i=n-1; i>=0; i--){
		sum1+=arr[i];
		if(sum1>sum-sum1){
			break;
		}
	}
	cout << n-i << endl;
	return 0;
}
