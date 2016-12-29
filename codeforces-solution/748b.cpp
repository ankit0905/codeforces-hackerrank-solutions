#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    int a[26];
    for(int i=0; i<26; i++)
        a[i]=-1;
    int len = s.length(),f=0;
    for(int i=0; i<len; i++){
        //cout << s[i] <<  " " << a[s[i]-97] << "   " << t[i] << " "<< a[t[i]-97] << endl; 
        if(s[i]!=t[i]){
            if(a[s[i]-97]==-1 && a[t[i]-97]!=-1 || a[s[i]-97]!=-1 && a[t[i]-97]==-1){
                f=-1;
                break;
            }
            else if(a[s[i]-97]==-1){
                a[s[i]-97]=t[i]-97;
                a[t[i]-97]=s[i]-97;
            }
            else{
                if(a[s[i]-97]!=t[i]-97 || a[t[i]-97]!=s[i]-97){
                    f=-1;
                    break;
                }
            }
        }
        else{
            if(a[s[i]-97]==-1){
                a[s[i]-97]=s[i]-97;
            }
            else{
                if(a[s[i]-97]!=s[i]-97){
                    f=-1;
                    break;
                }
            }
        }
    }
    if(f==-1){
        cout << "-1" << endl;
    }
    else{
        int ct=0;
        for(int i=0; i<26; i++){
            if(a[i]!=-1 && a[i]!=i){
                ct++;
            }
        }
        cout << ct/2 << endl;
        int b[26]={0};
        for(int i=0; i<26; i++){
            if(a[i]!=-1 && a[i]!=i && b[i]==0){
                cout << (char)(i+97) << " " << (char)(a[i]+97) << endl;
                b[i]=1;
                b[a[i]]=1;
            }
        }
    }
	return 0;
}
