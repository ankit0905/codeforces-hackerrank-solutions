#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	pair<int, int> p[n];
	for(int i=0; i<n; i++){
		cin >> p[i].first;
		p[i].second=i+1;
	}
	for(int i=1; i<n; i++){
		int j=i;
		while(j>0 && p[j].first<p[j-1].first){
			swap(p[j],p[j-1]);
			j--;
		}
	}
	for(int i=0; i<n; i++){
		cout << p[i].second << " ";
	}
	cout << endl;
	return 0;
}
