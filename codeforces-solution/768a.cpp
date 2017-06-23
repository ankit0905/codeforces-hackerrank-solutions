#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

int main()
{	
	int n,ct=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	int min=v[0],max=v[0];
	for(int i=0; i<n; i++){
		if(v[i] <= min)
			min = v[i];
		if(v[i] >= max)
			max = v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		if(v[i] > min && v[i] < max)
			ct++;
	}
	cout << ct << endl;
	return 0;
}
