#include <iostream>
using namespace std;

int main()
{
	int n,ct=0;
	cin >> n;
	pair<int , int> p[n];
	for(int i=0; i<n; i++){
		cin >> p[i].first >> p[i].second;
		if(p[i].second-p[i].first>=2){
			ct++;
		}
	}
	cout << ct << endl;
	return 0;
}
