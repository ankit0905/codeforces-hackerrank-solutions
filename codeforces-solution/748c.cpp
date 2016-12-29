#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

int dist(pair<int,int> p1, pair<int,int> p2)
{
    return abs(p1.first-p2.first)+abs(p2.second-p1.second);
}

int main()
{
    int n;
    cin >> n; 
    string s;
    cin >> s;
    pair<int,int> p = make_pair(0,0);
    pair<int,int> curr = p, st=p;
    int d=0,ct=0,c=0,f=0;
    for(int i=0; i<s.length(); i++){
        if(i==0){
            if(s[i]=='R'){
                p.first++;
            }
            else if(s[i]=='L'){
                p.first--;
            }
            else if(s[i]=='U'){
                p.second++;
            }
            else{
                p.second--;
            }
            c++;
        }
        else{
            if(s[i]=='R'){
                p.first++;
                c++;
            }
            else if(s[i]=='L'){
                p.first--;
                c++;
            }
            else if(s[i]=='U'){
                p.second++;
                c++;
            }
            else{
                p.second--;
                c++;
            }
            if(c!=dist(p,curr)){
                if(s[i]=='L'){
                    curr.first=p.first+1;
                    curr.second=p.second;
                }
                else if(s[i]=='R'){
                    curr.first=p.first-1;
                    curr.second=p.second;
                }
                else if(s[i]=='U'){
                    curr.first=p.first;
                    curr.second=p.second-1;
                }
                else{
                    curr.first=p.first;
                    curr.second=p.second+1;
                }
                c=1;
                ct++;
                //cout << curr.first << " " << curr.second << endl;
            }
            else{
                f=0;
            }
            //cout << p.first << " " << p.second << endl;
        }
    }
    //cout << curr.first << " " << curr.second << endl;
    cout << ct+1 << endl;
	return 0;
}
