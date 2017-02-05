#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[n],ans[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int fl[100005]={0};
	for(int i=n-1; i>=0; i--){
		if(i==n-1){
			ans[i] = 1;
			fl[a[i]] = 1;
		}
		else{
			if(fl[a[i]]==0){
				ans[i]=ans[i+1]+1;
				fl[a[i]]=1;
			}
			else{
				ans[i]=ans[i+1];
			}
		}
	}
	while(m--){
		int x;
		cin >> x;
		x--;
		cout << ans[x] << endl;
	}
	return 0;
}
