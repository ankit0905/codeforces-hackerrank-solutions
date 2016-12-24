#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int n,l, max=0;
	cin >> n >> l;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(int i=1; i<n; i++){
		if(arr[i]-arr[i-1]>max){
			max=arr[i]-arr[i-1];;
		}
	}
	if(arr[0]*2>max){
		max=2*arr[0];
	}
	if((l-arr[n-1])*2>max){
		max=(l-arr[n-1])*2;
	}
	double ans=(double)max/2;
	printf("%.10f\n", ans);
	return 0;
}
