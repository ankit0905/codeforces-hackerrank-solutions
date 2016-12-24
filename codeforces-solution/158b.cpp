#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n),count(4,0);
	for(int i=0; i<n; i++){
		cin >> arr[i];
		int tmp=arr[i];
		count[tmp-1]++;
	}
	int tot=0;
	tot+=count[3];
	count[3]=0;
	tot+=count[2];
	if(count[0]>=count[2]){
		count[0]-=count[2];
	}
	else{
		count[0]=0;
	}
	count[2]=0;
	if(count[1]%2==0){
		tot+=(count[1])/2;
		count[1]=0;
	}
	else{
		tot+=(count[1])/2;
		count[1]=1;
		tot++;
		count[1]=0;
		if(count[0]-2<=0){
			cout << tot << endl;
			return 0;
		}
		else{
			count[0]-=2;
			if(count[0]%4!=0)
				tot=tot+1+(count[0])/4;
			else
				tot=tot+(count[0])/4;
			cout << tot << endl;
			return 0;
		}
	}
	if(count[0]%4!=0)
		tot=tot+1+(count[0])/4;
	else
		tot=tot+(count[0])/4;
	cout << tot << endl;
	return 0;

}
