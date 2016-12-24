#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int ans=2, ele=2;
	for(int i=1; i<n; i++){
		if(arr[i]>=ele){
			ele++;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
