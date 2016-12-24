#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int q;
    cin >> q;
    map<string, int> m;
    while(q--){
        string s;
        cin >> s;
        if(m.find(s)!=m.end()){
            cout << s << m[s] << endl;
            m[s]++;
        }
        else{
            cout << "OK" << endl;
            m.insert(make_pair(s,1));
        }
    }
    return 0;
}
