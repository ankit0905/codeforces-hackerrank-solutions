#include <iostream>
using namespace std;

int main()
{
	int m,n,q;
	cin >> n;
	int arr[n], arr1[n], tot=0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		tot+=arr[i];
		arr1[i]=tot;
	}
	cin >> m;
	while(m--){
		cin >> q;
		int lo=0, hi=n-1;
		while(lo!=hi){
			int mid=(lo+hi)/2;
			if(arr1[mid]>=q){
				hi=mid;
			}
			else{
				lo=mid+1;
			}
		}
		cout << lo+1 << endl;
	}
	return 0;
}
