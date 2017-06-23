#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <set>
#include <map>

using namespace std;

#define ll long long

#define PLL pair<int,int>
#define mp make_pair

int main()
{
	int a[4][4], p[4];
	p[0] = p[1] = p[2] = p[3] = 1;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin >> a[i][j];
			if(a[i][j] == 0){
				continue;
			}
			if(i == 0){
				if(j == 0){
					p[3] = 0;
					p[0] = 0;
				}
				else if(j == 1){
					p[0] = 0;
					p[2] = 0;
				}
				else if(j == 2){
					p[0] = 0;
					p[1] = 0;
				}
			}
			else if(i == 1){
				if(j == 0){
					p[1] = 0;
					p[0] = 0;
				}
				else if(j == 1){
					p[1] = 0;
					p[3] = 0;
				}
				else if(j == 2){
					p[1] = 0;
					p[2] = 0;
				}			
			}
			else if(i == 2){
				if(j == 0){
					p[2] = 0;
					p[1] = 0;
				}
				else if(j == 1){
					p[2] = 0;
					p[0] = 0;
				}
				else if(j == 2){
					p[2] = 0;
					p[3] = 0;
				}
			}
			else{
				if(j == 0){
					p[3] = 0;
					p[2] = 0;
				}
				else if(j == 1){
					p[3] = 0;
					p[1] = 0;
				}
				else if(j == 2){
					p[3] = 0;
					p[0] = 0;
				}
			}
		}
	}
	int fl = 1;
	for(int i=0; i<4; i++){
		if(p[i] == 0 && a[i][3] == 1){
			fl = 0;
			break;
		}
	}
	if(fl == 1){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}
