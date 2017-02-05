#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
	string inp, str = "Bulbasaur";
	cin >> inp;
	int freq[150] = {0};
	for(int i=0; i<inp.length(); i++){
		int letter = inp[i];
		freq[letter]++;
	}
	int mi = 1000000;
	for(int i=0; i<150; i++){
		char ch = (char)i;
		if(ch=='B' || ch=='l' || ch=='b' || ch=='s' || ch=='r'){ 
			mi = min(mi, freq[i]);
		}
		else if(ch=='u' || ch=='a'){
			mi = min(mi, freq[i]/2);
		}
	}
	cout << mi << endl;
	return 0;
}
