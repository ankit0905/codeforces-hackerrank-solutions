#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int p,q;
	cin >> p;
	int i,arr[p], flag[n+1];
	for(i=0; i<p; i++){
		cin >> arr[i];
		flag[arr[i]]=1;
	}
	cin >> q;
	int arr1[q];
	for(i=0; i<q; i++){
		cin >> arr1[i];
		flag[arr1[i]]=1;
	}
	for(i=1; i<=n; i++){
		if(flag[i]!=1){
			cout << "Oh, my keyboard!" << endl;
			break;
		}
	}
	if(i==n+1){
		cout << "I become the guy." << endl;
	}
	return 0;
}
