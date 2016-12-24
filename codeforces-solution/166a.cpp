#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	pair<int, int> p[n];
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> p[i].first >> p[i].second;
	}
	for(int i=1; i<n; i++){
		int j=i;
		while(j>0 && p[j].first>=p[j-1].first){
			if(p[j].first>p[j-1].first){
				swap(p[j].first, p[j-1].first);
				swap(p[j].second, p[j-1].second);
			}
			else{
				if(p[j].second<p[j-1].second){
					swap(p[j].first, p[j-1].first);
					swap(p[j].second, p[j-1].second);
				}
			}
			j--;
		}
	}
	arr[0]=1;
	int ele=1;
	for(int i=1; i<n; i++){
		if(p[i].first!=p[i-1].first){
			arr[i]=i+1;
			ele=i+1;
		}
		else if(p[i].second!=p[i-1].second){
			arr[i]=i+1;
			ele=i+1;
		}
		else{
			arr[i]=ele;
		}
	}
	ele=arr[k-1];
	int ct=0;
	for(int i=0; i<n; i++){
		if(arr[i]==ele)
			ct++;
	}
	cout << ct << endl;
	return 0;
}
