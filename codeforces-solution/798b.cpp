#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
#include <map>
#include <queue>
#include <climits>
using namespace std;

#define ll long long int

int main()
{
	/*std::ios::sync_with _stdio(false);
	cin.tie(NULL);*/
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int l = v[0].length(), fl = 1;
	for(int i=1; i<n; i++){
		int len = v[i].length();
		if(fl == 0){
			break;
		}
		if(len != l){
			fl = 0;
			break;
		}
		else{
			fl = 0;
			string str = "";
			for(int j=0; j<len; j++){
				str = "";
				for(int k=0; k<len; k++){
					str.push_back(v[i][(j+k)%len]);
				}
				if(str == v[0]){
					fl = 1;
					break;
				}
			}
		}
	}
	if(fl == 0){
		cout << "-1" << endl;
	}
	else{
		int mi = 1000000, j;
		int len = v[0].length();
		string tmp = "";
		for(int i=0; i<len; i++){
			string str = "";
			for(j=0; j<len; j++){
				str.push_back(v[0][(i+j)%len]);
			}
			//cout << str << endl;
			int ct = i, z;
			//cout << ct << " ";
			for(j=1; j<n; j++){
				for(int k=0; k<len; k++){
					tmp = "";
					for(z=0; z<len; z++){
						tmp.push_back(v[j][(k+z)%len]);
					}
					if(tmp == str){
						ct += k;
						break;
					}
					//cout << ct << endl;
				}
			}	
			//cout << ct << endl;
			mi = min(ct, mi);
		}
		cout << mi << endl;
	}
	return 0;
}
