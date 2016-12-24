#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[5][5];
	int row,col,flag=0;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){
				flag=1;
				row=i;
				col=j;
			}
		}
	}
	cout << abs(2-col)+abs(2-row) << endl;
	return 0;
}
