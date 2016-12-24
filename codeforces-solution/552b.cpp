#include <iostream>
#include <vector>
using namespace std;

long long int pow(long long int a, long long int b);

int main()
{
	long long int n,m,d=0,ans=0;
	vector<long long int> v;
	cin >> n;
	m=n;
	while(m>0){
		v.push_back(m%10);
		m=m/10;
		d++;
	}
	long long int lo=0, hi=v.size()-1;
	while(lo<hi){
		swap(v[lo], v[hi]);
		lo++;
		hi--;
	}
	long long int sz=v.size();
	if(d==1){
		cout << n << endl;
		return 0;
	}
	for(long long int i=0; i<d-1; i++)
		ans+=9*(i+1)*(long long int)pow(10,i);
	//cout << ans << endl;
	for(int i=0; i<sz; i++){
		if(i==0){
			ans+=(v[i]-1)*d*(long long int)pow(10,d-1);
		}
		else if(i==sz-1){
			ans+=(v[i]+1)*d*(long long int)pow(10,d-1-i);
		}
		else{
			ans+=(v[i])*d*(long long int)pow(10,d-1-i);
		}
		//cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

long long int pow(long long int a, long long int b)
{
	long long int ans=1;
	for(int i=0; i<b; i++)
		ans=ans*a;
	return ans;
}
