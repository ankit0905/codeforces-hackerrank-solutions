#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
#include <string>
using namespace std;

int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int m,d;
	cin >> m >> d;
	int days = arr[m-1];
	if(days == 28 && d!=1){
		cout << "5" << endl;
	}
	else if(days == 28 && d==1){
		cout << "4" << endl;
	}
	else if(days == 30 && d<=6){
		cout << "5" << endl;
	}
	else if(days == 30 && d==7){
		cout << "6" << endl;
	}
	else if(days == 31 && d<=5){
		cout << "5" << endl;
	}
	else if(days == 31 && (d==6 || d==7)){
		cout << "6" << endl;
	}
	return 0;
}
