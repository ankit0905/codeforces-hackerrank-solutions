#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int m;
	string str;
	cin >> str;
	cin >> m;
	int len = str.length();
	int ans[len];
	for(int i=0; i<len-1; i++){
		if(i==0 && str[i]==str[i+1])
			ans[i] = 1;
		else if(i==0)
			ans[i] = 0;
		else{
			if(str[i]==str[i+1])
				ans[i] = ans[i-1]+1;
			else
				ans[i] = ans[i-1];
		}
	}
	while(m--){
		int l,r;
		cin >> l >> r;
		l--;
		r--;
		if(l == 0){
			cout << ans[r-1] << endl;
		}
		else{
			cout << ans[r-1]-ans[l-1] << endl;
		}
	}
	return 0;
}
