#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		if(s=="Icosahedron"){
			ans += 20;
		}
		else if(s=="Cube"){
			ans += 6;
		}
		else if(s=="Tetrahedron"){
			ans += 4;
		}
		else if(s=="Dodecahedron"){
			ans += 12;
		}
		else{
			ans += 8;
		}
	}
	cout << ans << endl;
	return 0;
}
