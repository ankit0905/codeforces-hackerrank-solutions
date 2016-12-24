#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;

int main()
{
	int m, s, s1;
	cin >> m >> s;
	s1=s;
	if(m==1){
		if(s>9){
			cout << "-1 -1" << endl;
		}
		else{
			cout << s << " " << s << endl;
		}
		return 0;
	}
	else if(s==0 || s>m*9){
		cout << "-1 -1" << endl;
		return 0;
	}
	else{
		vector<int> min(m), max;
		for(int i=0; i<m; i++){
			if(s==0){
				max.push_back(0);
			}
			else if(s>9){
				max.push_back(9);
				s-=9;
			}
			else{
				max.push_back(s);
				s=0;
			}
		}
		s1--;
		for(int i=m-1; i>=1; i--){
			if(s1==0){
				min[i]=0;
			}
			else if(s1>9){
				min[i]=9;
				s1-=9;
			}
			else{
				min[i]=s1;
				s1=0;
			}
		}
		min[0]=1+s1;
		for(int i=0; i<m; i++){
			cout << min[i];
		}
		cout << " ";
		for(int i=0; i<m; i++){
			cout << max[i];
		}
		cout << endl;
		return 0;
	}
	return 0;
}
