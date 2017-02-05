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

int main()
{
	int a,b;
	cin >> a >> b;
	int diff = abs(a-b);
	if(a==0 && b==0){
		cout << "NO" << endl;
	}
	else if(diff<=1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}
