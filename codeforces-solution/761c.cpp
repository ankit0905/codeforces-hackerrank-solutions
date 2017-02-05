#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define ll long long int

int ch(char c)
{
	if(c>=65 && c<=90 || c>=97 && c<=122)
		return 1;
	else	
		return 0;
}

int dig(char c)
{
	if(c>=48 && c<=57)
		return 1;
	else
		return 0;
}

int sym(char c)
{
	if(c=='*' || c=='&' || c=='#')
		return 1;
	else
		return 0;
}

int main()
{
	int n,m;
	cin >> n >> m;
	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}	
	vector<pair<int, pair<int, int> > > arr(n);
	for(int i=0; i<n; i++){
		string s = v[i];
		arr[i].first = arr[i].second.first = arr[i].second.second = -1;
		for(int j=0; j<m; j++){
			char c = s[j];
			if(dig(c)){
				int x = j;
				int y = m-j;
				if(arr[i].first == -1)
					arr[i].first = min(x,y);
				else{
					arr[i].first = min(arr[i].first,min(x,y));
				}
			}
			else if(ch(c)){
				int x = j;
				int y = m-j;
				if(arr[i].second.first == -1)
					arr[i].second.first = min(x,y);
				else{
					arr[i].second.first = min(arr[i].second.first,min(x,y));
				}
			}
			else if(sym(c)){
				int x = j;
				int y = m-j;
				if(arr[i].second.second == -1)
					arr[i].second.second = min(x,y);
				else{
					arr[i].second.second = min(arr[i].second.second,min(x,y));
				}
			}
		}
		//cout << arr[i].first << " " << arr[i].second.first << " " << arr[i].second.second << endl;
	}
	int s1 = 0, s2 = 0, s3 =0, min = 1000000000;
	for(int i=0; i<n; i++){
		if(arr[i].first == -1)
			continue;
		s1 = arr[i].first;
		for(int j=0; j<n; j++){
			if(j==i || arr[j].second.first==-1)
				continue;
			s2 = arr[j].second.first;
			for(int k=0; k<n; k++){
				if(k==j || k==i || arr[k].second.second==-1)
					continue;
				s3 = arr[k].second.second;
				if(s1+s2+s3 < min)
					min = s1+s2+s3;
			}
		}
	}
	cout << min << endl;
	return 0;
}
