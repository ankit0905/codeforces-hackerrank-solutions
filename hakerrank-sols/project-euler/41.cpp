#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
using namespace std;

int isprime(long long int n)
{
	if(n<=1)
		return 0;
	else if(n==2)
		return 1;
	else{
		long long int max = sqrt(n);
		for(int i=2; i<=max; i++){
			if(n%i == 0)
				return 0;
		}
		return 1;
	}
}

set<int> s;

void solve(string str, int num)
{
	long long int n;
	for(int i=0; i<num; i++){
		n = stoi(str);
		next_permutation(str.begin(),str.end());
		if(isprime(n)){
			s.insert(n);
		}
	}
}

int main() {
	solve("1234",24);
	solve("12345",120);
	solve("123456",720);
	solve("1234567",5040);
	solve("12345678",40320);
	solve("123456789",362880);
	set<int>::iterator it;
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		if(n>=7652413)
			cout << 7652413 << endl;
		else if(n<1423)
			cout << "-1" << endl;
		else{
			long long int m = 1423; 
			for(it=s.begin(); it!=s.end(); it++){
				long long int num = *it;
				if(num > n){
					cout << m << endl;
					break;
				}
				m = num;
			}
		}
	}
    return 0;
}

//
