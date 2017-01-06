#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	queue<int> q1, q2;
	for(int i=0; i<n; i++){
		 if(s[i]=='D')
		 	q1.push(i);
		 else
		 	q2.push(i);
	}
	while(q1.size()!=0 && q2.size()!=0){
		if(q1.front()<q2.front()){
			//cout << "D => " << q1.front() << " " << q2.front() << endl;
			q2.pop();
			int ele = q1.front();
			q1.pop();
			q1.push(n+ele);
		}
		else{
			//cout << "R => " << q1.front() << " " << q2.front() << endl;
			q1.pop();
			int ele = q2.front();
			q2.pop();
			q2.push(n+ele);
		}
	}
	if(q1.empty())
		cout << "R" << endl;
	else
		cout << "D" << endl;
	return 0;
}
