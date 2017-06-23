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

int main()
{
	string a,b;
	cin >> a >> b;
	int l1 = a.length(), l2 = b.length();
	if(l1!=l2){
		cout << max(l1,l2) << endl;
	}
	else{
		if(a == b){
			cout << "-1" << endl;
		}
		else{
			cout << l1 << endl;
		}
	}
	return 0;
}
