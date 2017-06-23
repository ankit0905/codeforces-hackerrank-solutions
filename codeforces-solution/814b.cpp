#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define ll long long int
 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define SIZE 1000004

int main()
{
	int n;
	cin >> n;
	int a[n],b[n],fl[n+1];
	for(int i=0; i<=n; i++)fl[i] = 0;
	for(int i=0; i<n; i++)cin >> a[i];
	for(int i=0; i<n; i++)cin >> b[i];
	vector<int> v;
	for(int i=0; i<n; i++){
		if(a[i] != b[i]){
			v.push_back(i);
		}
		else{
			fl[a[i]] = 1;
		}
	}
	if(v.size() == 2){
		int i1 = v[0], i2 = v[1];
		int j1 = -1, j2 = -1;
		for(int i=1; i<=n; i++){
			if(fl[i] == 0){
				if(j1 == -1)
					j1 = i;
				else
					j2 = i;
			}
		}
		//cout << i1 << " " << i2 << " " << j1 << " " << j2 << endl;
		if(a[i1] == j1 && b[i2] == j2){
			for(int i=0; i<n; i++){
				if(i == i1)
					cout << j1 << " ";
				else if(i == i2)
					cout << j2 << " ";
				else
					cout << a[i] << " ";
			}
			cout << endl;
		}
		else if(a[i1] == j2 && b[i2] == j1){
			for(int i=0; i<n; i++){
				if(i == i1)
					cout << j2 << " ";
				else if(i == i2)
					cout << j1 << " ";
				else
					cout << a[i] << " ";
			}
			cout << endl;
		}
		else if(a[i2] == j1 && b[i1] == j2){
			for(int i=0; i<n; i++){
				if(i == i1)
					cout << j2 << " ";
				else if(i == i2)
					cout << j1 << " ";
				else
					cout << a[i] << " ";
			}
			cout << endl;
		}
		else{
			for(int i=0; i<n; i++){
				if(i == i1)
					cout << j1 << " ";
				else if(i == i2)
					cout << j2 << " ";
				else
					cout << a[i] << " ";
			}
			cout << endl;
		}
	}
	else{
		int i1 = v[0], i2;
		for(int i=1; i<=n; i++){
			if(fl[i] == 0){
				i2 = i;
				break;
			}
		}
		for(int i=0; i<n; i++){
			if(i == i1){
				cout << i2 << " ";
			}
			else{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
