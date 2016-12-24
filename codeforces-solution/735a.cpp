#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
	string s;
	cin >> s;
	int l = s.length(),i1,i2;
	for(int i=0; i<l; i++){
	    if(s[i]=='G')
	        i1=i;
        else if(s[i]=='T')
            i2=i;
	}
	if(i1<i2){
	    int i;
	    for(i=i1; i<=i2; i+=k){
	        if(s[i]=='#' || s[i]=='T')
	            break;
	    }
	    if(i==i2){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	else{
	    int i;
	    for(i=i1; i>=i2; i-=k){
	        if(s[i]=='#' || s[i]=='T')
	            break;
	    }
	    if(i==i2){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
