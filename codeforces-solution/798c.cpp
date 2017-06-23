#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	int curr = 0;
	for(int i=0; i<n-1; i++){
	    if(i == 0){
	        curr = gcd(a[i],a[i+1]);
	        if(curr == 1)
	            break;
	    }
	    else{
	        curr = gcd(curr, a[i+1]);
	        if(curr == 1)
	            break;
	    }
	}
	int ct = 0;
	if(curr == 1){
	    for(int i=0; i<n-1; i++){
	        if(a[i] % 2 == 1){
	            if(a[i+1] % 2 == 0){
	                ct+=2;
	            }
	            else{
	                a[i+1] = 2;
	                ct+=1;
	            }
	        }
	        else if(i == n-2){
	            if(a[i+1] % 2 == 1){
	                ct+=2;
	                a[i+1] = 2;
	            }
	        }
	    }
	}
	if(curr == 1){
	    cout << "YES" << endl;
	    cout << ct << endl;
	}
	else{
	    cout << "YES\n0" << endl;
	}
    return 0;	
}
