#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int n,m,vis[105][105];
vector<string> v(105);
vector<char> path;

bool isValid(int r, int c)
{
	if(r < 0 || c < 0 || r >= n || c >= m)
		return false;
	else
		return true;
}

int dfs(int r, int c)
{
	int sz = path.size();
	vis[r][c] = 1;
	if(v[r][c] == 'F'){
		return 1;
	}
	if(isValid(r-1,c) && vis[r-1][c] == 0 && v[r-1][c] != '*'){
		path.push_back('U');
		if(dfs(r-1,c) == 1){
			return 1;
		}
		else{
			path.pop_back();
		}
	}
	if(isValid(r+1,c) && vis[r+1][c] == 0 && v[r+1][c] != '*'){
		path.push_back('D');
		if(dfs(r+1,c) == 1){
			return 1;
		}
		else{
			path.pop_back();
		}
	}
	if(isValid(r,c-1) && vis[r][c-1] == 0 && v[r][c-1] != '*'){
		path.push_back('L');
		if(dfs(r,c-1) == 1){
			return 1;
		}
		else{
			path.pop_back();
		}
	}
	if(isValid(r,c+1) && vis[r][c+1] == 0 && v[r][c+1] != '*'){
		path.push_back('R');
		if(dfs(r,c+1) == 1){
			return 1;
		}
		else{
			path.pop_back();
		}
	}
	return 0;
}

int main()
{
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			vis[i][j] = 0;
		}
	}
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int r = 0, c = 0, sz;
	dfs(r,c);
	sz = path.size();
	int hor = 0, ver = 0, fl1 = 0, fl2 = 0, x = 0, y = 0, x1, y1;
	int left = 1, up = 1;
	int j = 0;
	while(true){
		//cout << "j = " << j << endl;
		hor = ver = 0;
		if(path[j] == 'L' || path[j] == 'R'){
			hor = 1;
			if(fl1 == 0){
				cout << path[j] << endl;
				x1 = x;
				y1 = y+1;
			}
			else{
				if(left == 1){
					cout << path[j] << endl;
				}
				else{
					if(path[j] == 'L')
						cout << 'R' << endl;
					else
						cout << 'L' << endl;
				}
			}
		}
		else{
			ver = 1;
			if(fl2 == 0){
				cout << path[j] << endl;
				x1 = x+1;
				y1 = y;
			}
			else{
				if(up == 1){
					cout << path[j] << endl;
				}
				else{
					if(path[j] == 'U')
						cout << 'D' << endl;
					else
						cout << 'U' << endl;
				}
			}
		}
		fflush(stdout);
		cin >> x >> y;
		x--;
		y--;
		if(v[x][y] == 'F' || v[x][y] == '*'){
			break;
		}
		else{
			if(hor == 1){
				if(fl1 == 0){
					//cout << x1 << " " << y1  << "  -  " << x << " " << y << endl;
					if(x1 != x || y1 != y){
						left = 0;
						fl1 = 1;
					}
					else{
						fl1 = 1;
						j++;
					}
				}
				else{
					j++;
				}
			}
			else{
				if(fl2 == 0){
					if(x1 != x || y1 != y){
						up = 0;
						fl2 = 1;
					}
					else{
						fl2 = 1;
						j++;
					}
				}
				else{
					j++;
				}
			}
		}
		//cout << fl1 << " " << fl2 << endl;
	}
	return 0;
}
