#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[m], min=1000000;
	for(int i=0; i<m; i++)
		cin >> arr[i];
	sort(arr, arr+m);
	if(m==n){
		min=arr[n-1]-arr[0];
	}
	for(int i=0; i<=m-n; i++){
		int diff=arr[i+n-1]-arr[i];   //m-n-1+n-1=m-2    - m-n-1
 		if(diff<min)
			min=diff;
		//cout << diff << " " << i << " " << i+n-1 << " " <<  arr[i] << " " << arr[i+n-1] << endl;
	}
	cout << min << endl;
	return 0;
}
