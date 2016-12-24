#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    set<pair<int,int> > s;
    int c,d;
    c=x1+x2-x3,d=y1+y2-y3;
    s.insert(make_pair(c,d));
    c=x2+x3-x1,d=y2+y3-y1;
    s.insert(make_pair(c,d));
    c=x3+x1-x2,d=y3+y1-y2;
    s.insert(make_pair(c,d));
    cout << s.size() << endl;
    for(auto it=s.begin(); it!=s.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
	return 0;
}
