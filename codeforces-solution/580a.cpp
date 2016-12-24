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
	int max=1, curr=1;
	for(int i=1; i<n; i++){
		if(arr[i]>=arr[i-1])
			curr++;
		else{
			if(curr>max)
				max=curr;
			curr=1;
		}
	}
	if(curr>max)
		max=curr;
	cout << max << endl;
	return 0;
}
