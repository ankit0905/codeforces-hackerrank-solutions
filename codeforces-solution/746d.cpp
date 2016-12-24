#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n,k,a,b,f=0;
	cin >> n >> k >> a >> b;
	if(a==b){
		for(int i=0; i<n; i++){
			if(f==1){
				cout << "G";
				f=0;
			}
			else{
				cout << "B"; 
				f=1;
			}
		}
	}
	else if(a<b){
		int mx=(int)ceil((double)b/(a+1));
		if(k<mx){
			cout << "NO";
			return 0;
		}
		int b1=(int)ceil((double)b/mx);
		int a1=a,d=0;
		//cout << b1 << " " << a1 << endl;
		if(a1>b1){
			d=a1-b1-1;
			f=1;
		}
		while(true){
			if(f==0){
				if(b==0){
					break;
				}
				for(int i=0; i<mx && b!=0; i++){
					cout << "B";
					b--;
				}
				f=1;
			}
			else{
				if(a==0){
					break;
				}
				cout << "G";
				if(d>0 && k>1){
					cout << "G";
					d--;
					a--;
				}
				a--;
				f=0;
			}
		}
		while(b--){
			cout << "B";
		}
		while(a--){
			cout << "G";
		}
	}
	else{
		swap(a,b);
		int mx=(int)ceil((double)b/(a+1));
		int b1=(int)ceil((double)b/mx);
		int d=0,a1=a;
		if(a1>b1){
			d=a1-b1-1;
			f=1;
		}
		if(k<mx){
			cout << "NO";
			return 0;
		}
		//cout << b1 << " " << a1 << endl;
		while(true){
			if(f==0){
				if(b==0){
					break;
				}
				for(int i=0; i<mx && b!=0; i++){
					cout << "G";
					b--;
				}
				f=1;
			}
			else{
				if(a==0){
					break;
				}
				cout << "B";
				if(d>0 && k>1){
					cout << "B";
					d--;
					a--;
				}
				a--;
				f=0;
			}
		}
		while(b--){
			cout << "G";
		}
		while(a--){
			cout << "B";
		}
	}
	return 0;
}
