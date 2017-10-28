#include <bits/stdc++.h>

#define ll      long long int
#define pb         push_back
#define fi first
#define se second
#define mp make_pair
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);

#define lb(x, k)   lower_bound(all(x), k)-x.begin()
//first element not less than (i.e. greater or equal to) k
#define ub(x, k)   upper_bound(all(x), k)-x.begin()
//first element greater than k


ll mod = 1000000007;

using namespace std;

int main()
{
	_cin;
	int m,n,ct1=0;
	cin >> m >> n;
	int arr[m][n],ans[m][n],ct;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
			ct1+=arr[i][j];
			ans[i][j]=0;
		}
	}
	int row[m],col[n];
	for(int i=0;i<m;i++)
	{
		ct=0;
		for(int j=0;j<n;j++)
		{
			ct+=arr[i][j];
		}
		row[i]=ct;
	}
	for(int i=0;i<n;i++)
	{
		ct=0;
		for(int j=0;j<m;j++)
		{
			ct+=arr[j][i];
		}
		col[i]=ct;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				if(row[i]==n && col[j]==m)
				{
					ans[i][j]=1;
				}
				else if(row[i]!=n && col[j]!=m)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	ct=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			ct+=ans[j][i];
		}
	}
	if(ct1!=0 && ct==0)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
