#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int

int fl[100005];

int main()
{
	int n;
	cin >> n;
	int perm[n];
	for(int i=1; i<=n; i++){
		cin >> perm[i-1];
		fl[perm[i-1]]++;
	}
	vector<int> v;
	for(int i=1; i<=n; i++){
		if(fl[i] == 0){
			v.push_back(i);
		}
	}
	int sz = v.size(), idx = 0;
	for(int i=0; i<n; i++){
		if(perm[i] > n || fl[perm[i]] > 1){
			fl[perm[i]]--;
			perm[i] = v[idx++];
		}
		cout << perm[i] << " ";
	}
	cout << endl;
	return 0;
}
