#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, j, score;
	cin >> n >> m;
	string name;
	vector< vector< pair<int, string> > > v(m+1);
	pair<int, string> p;
	for(int i=0; i<n; i++){
		cin >>  name >> j >> score;
		p.first=score;
		p.second=name;
		v[j].push_back(p); 
	}
	for(int i=1; i<=m; i++){
		sort(v[i].rbegin(), v[i].rend());
		int sz=v[i].size();
		/*for(int j=0; j<sz; j++){
			cout << v[i][j].first << " " << v[i][j].second << endl;
		}*/
		if(sz==2){
			cout << v[i][0].second << " " << v[i][1].second;
		}
		else{
			if(v[i][1].first==v[i][2].first){
				cout << "?";
			}
			else{
				cout << v[i][0].second << " " << v[i][1].second;
			}
		}
		cout << endl;
	}
	return 0;
}
