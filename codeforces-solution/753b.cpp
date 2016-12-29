#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

vector<string> v;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
   int i;
   if (l == r){
   	    string s2;
   	    for(int i=0; i<4; i++){
   	    	s2.push_back(a[i]);
   	    }
   	    v.push_back(s2);
   	    //cout << s2 << endl;
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); 
       }
   }
}

int main()
{
	string s[] = {"0000","1111","2222","3333","4444","5555","6666","7777","8888","9999"};
	int a,b,f=0,i=0;
	int pos=0;
	string str;
	while(i<=9){
		cout << s[i] << endl;
		fflush(stdout);
		cin >> a >> b;
		if(a!=0){
			str.push_back(s[i][0]);
		}
		i++;
	}
	char s1[4];
	for(i=0; i<4; i++){
		s1[i]=str[i];
	} 
	permute(s1,0,3);
	for(i=0; i<v.size(); i++){
		cout << v[i] << endl;
		fflush(stdout);
		cin >> a >> b;
		if(a==4){
			break;
		}
	}
	return 0;
}
