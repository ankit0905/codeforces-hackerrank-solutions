#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int odd=0,even=0,flag=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0)
			even++;
		else
			odd++;
		if(even>=2){
			flag=1;
			break;
		}
		else if(odd>=2){
			flag=0;
			break;
		}
	}
	//cout << even << " " << odd << endl;
	for(int i=0; i<n; i++){
		if(flag==0 && arr[i]%2==0){
			cout << i+1 << endl;
			return 0;
		}
		else if(flag==1 && arr[i]%2!=0){
			cout << i+1 << endl;
			return 0;
		}
	}
	return 0;
}
