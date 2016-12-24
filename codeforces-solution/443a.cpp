#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main()
{
	char c;
	set<char> letters;
	while(scanf("%c", &c)==1){
		if(c>=97 && c<=122)
			letters.insert(c);
		if(c=='}')
			break;
	}
	int ct=0;
	set<char>::iterator it;
	for(it=letters.begin(); it!=letters.end(); it++)
		ct++;
	cout << ct << endl;
	return 0;
}
