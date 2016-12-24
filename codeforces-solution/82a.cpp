#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,i=1,j=0;
	cin >> n;
	while(i<n){
		i+=5*pow(2,j);
		j++;
	}
	if(i==n){
		cout << "Sheldon" << endl;
		return 0;
	}
	j--;
	i-=5*pow(2,j);
	int person=0;
	while(i<n){
		i+=pow(2,j);
		if(i==n){
			person++;
		}
		person++;
	}
	if(person>5){
		person=person-5;
	}
	switch(person){
		case 1: cout << "Sheldon" << endl;
				return 0;
		case 2: cout << "Leonard" << endl;
				return 0;
		case 3: cout << "Penny" << endl;
				return 0;
		case 4: cout << "Rajesh" << endl;
				return 0;
		case 5: cout << "Howard" << endl;
				return 0;
	}
}
