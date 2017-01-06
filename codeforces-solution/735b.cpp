#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	long long int n,n1,n2,s1=0,s2=0;
	cin >> n >> n1 >> n2;
	vector<long long int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(n1>n2)
		swap(n1,n2);
	sort(a.rbegin(),a.rend());
	for(int i=0; i<n1+n2; i++){
		if(i<n1){
			s1+=a[i];	
		}
		else{
			s2+=a[i];
		}
	}
	double ans1 = (double)s1/n1; 
	double ans2 = (double)s2/n2;
	printf("%.9lf\n",ans1+ans2);
	return 0;
}
