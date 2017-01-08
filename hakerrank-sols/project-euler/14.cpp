#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	const int size = 5000001;
	int arr[size];
	for (int i = 0; i < size; i++){
		int ct = 1;
		long long int j = i;
		while (j>1){
			if (j<i){
				ct = arr[j] + ct - 1;
				j=1;
			}
			else{
				ct++;
				if (j%2==1){
					j=3*j+1;
				}
				else{
					j=j/2;
				}
			}
		}
		arr[i] = ct;
	}
	int max = 1, idx = 0;
	for (int i = 0; i <size; i++){
		if (arr[i] >= max){
			max = arr[i];
			idx = i;
		}
		arr[i] = idx;
	}
	int t,n;
	scanf("%d", &t);
	while (t--){
		cin >> n;
        cout << arr[n] << endl;
	}
	return 0;
}
