#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n], min_index=0, max_index=0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i]==1){
			min_index=i;
		}
		if(arr[i]==n){
			max_index=i;
		}
	}
	int ans=0;
	if(min_index>max_index){
		if(n-1-min_index>max_index){
			ans=n-1-max_index;
		}
		else{
			ans=min_index;
		}
	}
	else{
		if(n-1-max_index>min_index){
			ans=n-1-min_index;
		}
		else{
			ans=max_index;
		}	
	}
	cout << ans << endl;
}
