#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	char a[n][m];
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        cin >> a[i][j];
	        if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
	            cout << "#Color" << endl;
	            return 0;
	        }
	    }
	}
	cout << "#Black&White" << endl;
	return 0;
}
