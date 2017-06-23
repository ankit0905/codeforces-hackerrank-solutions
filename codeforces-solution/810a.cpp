#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <climits>
using namespace std; 

#define ll long long int

int main()
{
	int n;
	double k, avg;
	cin >> n >> k;
	double a[n], sum = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	avg = sum/n;
	double tmp = avg-floor(avg);
	if(tmp >= 0.5)
		avg = ceil(avg);
	else
		avg = floor(avg);
	int ct = 0;
	while(avg < k){
		n++;
		sum = sum+k;
		avg = sum/n;
		tmp = avg-floor(avg);
		if(tmp >= 0.5)
			avg = ceil(avg);
		else
			avg = floor(avg);
		ct++;
	}
	cout << ct << endl;
	return 0;
}
