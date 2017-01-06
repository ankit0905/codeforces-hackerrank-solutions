#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <queue>
using namespace std;

#define ll long long int 

int main()
{
	vector<string> v(4);
	for(int i=0; i<4; i++){
		cin >> v[i];
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(v[i][j]=='.'){
				v[i][j]='x';
				for(int ii=0; ii<4; ii++){
					for(int jj=0; jj<2; jj++){
						if(v[ii][jj]=='x' && v[ii][jj+1]=='x' && v[ii][jj+2]=='x'){
							cout << "YES" << endl;
							return 0;
						}
					}
				}
				for(int ii=0; ii<4; ii++){
					for(int jj=0; jj<2; jj++){
						if(v[jj][ii]=='x' && v[jj+1][ii]=='x' && v[jj+2][ii]=='x'){
							cout << "YES" << endl;
							return 0;
						}
					}
				}
				for(int ii=0; ii<2; ii++){
					for(int jj=0; jj<2; jj++){
						if(v[ii][jj]=='x' && v[ii+1][jj+1]=='x' && v[ii+2][jj+2]=='x'){
							cout << "YES" << endl;
							return 0;
						}
					}
				}
				for(int ii=0; ii<2; ii++){
					for(int jj=2; jj<4; jj++){
						if(v[ii][jj]=='x' && v[ii+1][jj-1]=='x' && v[ii+2][jj-2]=='x'){
							cout << "YES" << endl;
							return 0;
						}
					}
				}
				v[i][j]='.';
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
