#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long int n,k;
	cin >> n >> k;
	long long int sum=0, arr[n];
	for(long long int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(long long int i=0; i<n; i++){
		long long int ele=i+1;
		sum=(ele)*(ele+1)/2;
		if(sum==k){
			cout << arr[i] << endl;
			return 0;
		}
		else if(sum>k){
			sum-=ele;
			break;
		}
	}
	long long int index=k-sum-1;
	cout << arr[index] << endl;
	return 0;
}
