#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> name;
    vector<pair<string, pair<int, int> > > round(n);
    for(int i=0; i<n; i++){
        cin >> round[i].first >> round[i].second.first;
        round[i].second.second=-1;
        name.insert(round[i].first);
    }
    int sz=name.size();
    set<string>::iterator it;
    map<string, int> m;
    int ct=0;
    for(it=name.begin(); it!=name.end(); it++){
        string a=*it;
        //cout << a << endl;
        m.insert(make_pair(a,ct));
        ct++;
    }
    for(int i=0; i<n; i++){
        round[i].second.second=m[round[i].first];
        //cout << round[i].first << " " << round[i].second.second << endl;
    }
    vector<pair<int,int> > v(sz), v1(sz);
    for(int i=0; i<sz; i++){
        v[i].first=0;
        v[i].second=-1;
        v1[i].first=0;
        v1[i].second=-1;
    }
    int max=0;
    for(int i=0; i<n; i++){
        int score=round[i].second.first;
        int pos=round[i].second.second;
        v[pos].first+=score;
        v[pos].second=i;
    }
    for(int i=0; i<sz; i++){
        if(v[i].first>max){
            max=v[i].first;
        }
    }
    //cout << "max=" << max << endl;
    int winner_score=max, winner_pos=1000000;
    for(int i=0; i<n; i++){
        int score=round[i].second.first;
        int pos=round[i].second.second;
        v1[pos].first+=score;
        if(v[pos].first==winner_score){
            if(v1[pos].first>=winner_score && i<winner_pos){
                winner_pos=i;
            }
        }
    }
    string winner;
    //cout << " sdkjks" << endl;
    //cout << winner_pos << endl;
    winner_pos=round[winner_pos].second.second;
    //cout << winner_pos << endl;
    ct=0;
    for(it=name.begin(); it!=name.end(); it++){
        string a=*it;
        if(ct==winner_pos){
            winner=*it;
        }
        ct++;
    }
    cout << winner << endl;
    return 0;
}
