#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
   	int gov[k],ver[n+1],fl[n+1],grp[n+1],gr=1,ct[n+1],gg[n+1];
   	for(int i=0; i<=n; i++){
   		ver[i]=0;
   		fl[i]=0;
   		gg[i]=0;
   		grp[i]=0;
   		ct[i]=0;
   	}
   	for(int i=0; i<k; i++){
   		cin >> gov[i];
   		ver[gov[i]]=1;
	}
	int mat[n+1][n+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			mat[i][j]=0;
		}
	}
	for(int i=0; i<m; i++){
		int a,b;
		cin >> a >> b;
		mat[a][b]=mat[b][a]=1;
	}
	for(int i=1; i<=n; i++){
		if(fl[i]==1)
			continue;
		fl[i]=1;
		queue<int> q;
		q.push(i);
		ct[gr]++;
		while(!q.empty()){
			int node = q.front();
			q.pop();
			if(ver[node]==1){
				gg[gr]=1;
			}
			grp[node]=gr;
			ct[gr]++;
			for(int j=1; j<=n; j++){
				if(mat[node][j]==1 && fl[j]==0){
					fl[j]=1;
					q.push(j);
				}
			}
		}
		gr++;
	}/*
	for(int i=1; i<=n; i++){
		cout << "group of " << i << " => " << grp[i] << endl;
		cout << gg[i] << endl;
	}*/
	int ans=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i!=j && grp[i]==grp[j] && mat[i][j]==0){
				ans++;
				mat[i][j]=mat[j][i]=1;
				//cout << "f " << i << " " << j << endl;
			}
		}
	}
	int max=0,idx=gov[0];
	for(int i=0; i<k; i++){
		if(ct[grp[gov[i]]]>max){
			max=ct[grp[gov[i]]];
			idx=gov[i];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(mat[i][j]==0 && gg[grp[i]]==0 && gg[grp[j]]==0 && i!=j){
				//cout << "s " << i << " " << j << endl;
				mat[i][j]=mat[j][i]=1;
				ans++;
			}
		}
	}
	int con=grp[idx];
	//cout << con << endl;
	for(int i=1; i<=n; i++){
		if(grp[i]!=con)
			continue;
		for(int j=1; j<=n; j++){
			if(gg[grp[j]]==1)
				continue;
			if(i!=j && mat[i][j]==0){
				//cout << "t " << i << " " << j << endl;
				mat[i][j]=mat[j][i]=1;
				ans++;
			}
		}
	}
	cout << ans << endl;
    return 0;
}
