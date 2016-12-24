#include <iostream>
using namespace std;

int main()
{
	int n, m, x, y;
	cin >> n >> m;
	int flag[m+1];
	for(int i=0; i<n; i++){
		cin >> x;
		for(int j=0; j<x; j++){
			cin >> y;
			flag[y]=1;
		}
	}
	for(int i=1; i<=m; i++){
		if(flag[i]!=1){	cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
