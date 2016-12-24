#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	if(a==1||b==1||c==1){
		cout << n << endl;
		return 0;
	}
	else{
		if(n%2==0 && (a==2||b==2||c==2)){
			cout << n/2 << endl;
			return 0;
		}
	}
	if(a>b && a>c){
		swap(a,c);
	}
	else if(b>a && b>c){
		swap(b,c);
	}
	if(a>b)
		swap(a,b);
	//cout << a << b << c << endl;
	int max=(n/c),k,ans=1;
	for(int i=0; i<=max; i++){
		int m=n-c*i;
		int max1=(m/b);
		for(int j=0; j<=max1; j++){
			if((m-j*b)%a==0){
				k=(m-j*b)/a;
				int sum=i+j+k;
				if(sum>ans)
					ans=sum;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
