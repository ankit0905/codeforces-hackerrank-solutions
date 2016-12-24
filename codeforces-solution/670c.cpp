#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define lli long long int
#define vv vector<lli> 
#define all(a) a.begin(),a.end()

int main()
{	
	lli n,m,i,ct1,ct2;
	cin >> n;
	vv a(n);
	for(i=0; i<n; i++){
		cin >> a[i];
	}
	sort(all(a));
	cin >> m;
	vv audio(m);
	vv subtitle(m);
	for(i=0; i<m; i++){
		cin >> audio[i];
	}
	for(i=0; i<m; i++){
		cin >> subtitle[i];
	}
	lli max1=0,max2=0,max_index=0;
	for(i=0; i<m; i++){
		ct1=(lli)(upper_bound(all(a), audio[i])-lower_bound(all(a), audio[i]));
		ct2=(lli)(upper_bound(all(a), subtitle[i])-lower_bound(all(a), subtitle[i]));
		if(ct1>=max1){
			if(ct1>max1){
				max1=ct1;
				max2=ct2;
				max_index=i;
			}
			else{
				if(ct2>max2){
					max2=ct2;
					max_index=i;
				}
			}
		}
	}
	cout << max_index+1 << endl;
	return 0;
}
