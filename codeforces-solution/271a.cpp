#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cin >> n;
	i=n+1;
	while(true){
		int j=i, arr[4],k=0;
		while(j>0){
			int rem=j%10;
			arr[k++]=rem;
			j=j/10;
		}
		if(arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && 
			arr[1]!=arr[2] && arr[1]!=arr[3] && arr[2]!=arr[3]){
			cout << i << endl;
			return 0;
		}
		i++;
	}
}
