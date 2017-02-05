#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <cstdio>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n+1],group[n+1],ct[n+1];
	for(int i=1; i<=n; i++){
		cin >> arr[i];
		group[i]=-1;
		ct[i]=0;
	}
	int grp = 1, ans=0;
	for(int i=1; i<=n; i++){
		if(i==1){
			group[1]=1;
			ct[1]=2;
			group[arr[1]]=1;
			grp++;
		}
		else{
			if(group[arr[i]]==-1 && group[i]==-1){
				group[arr[i]]=group[i]=grp;
				ct[grp]+=2;
				grp++;
			}
			else if(group[arr[i]]!=-1 && group[i]!=-1){
				if(group[arr[i]]!=group[i]){
					ct[group[arr[i]]]+=ct[group[i]];
					ct[group[i]]=0;
					group[i]=group[arr[i]];
				}
			}
			else if(group[arr[i]]!=-1){
				group[i]=group[arr[i]];
				ct[group[arr[i]]]++;
			}
			else if(group[i]!=-1){
				group[arr[i]]=group[i];
				ct[group[i]]++;
			}
		}
	}
	for(int i=1; i<=n; i++){
		if(ct[i]!=0){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
