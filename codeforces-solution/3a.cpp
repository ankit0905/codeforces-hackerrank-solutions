#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    string a,b,c;
    int ct=0;
    cin >> a >> b;
    int start_col=a[0]-97, start_row=a[1]-48, end_col=b[0]-97, end_row=b[1]-48;
    int diff=min(abs(end_row-start_row),abs(end_col-start_col));
    ct+=diff;
    if(diff>0){
        if(end_row>start_row && end_col>start_col){
            c="RU";
            start_row+=diff;
            start_col+=diff;
        }
        else if(end_row>start_row && end_col<start_col){
            c="LU";
            start_row+=diff;
            start_col-=diff;
        }
        else if(end_row<start_row && end_col>start_col){
            c="RD";
            start_row-=diff;
            start_col+=diff;
        }
        else{
            c="LD";
            start_row-=diff;
            start_col-=diff;
        }
    }
    if(start_col!=end_col){
        int d=abs(end_col-start_col);
        ct+=d;
    }
    else if(start_row!=end_row){
        int d=abs(end_row-start_row);
        ct+=d;
    }
    cout << ct << endl;
    for(int i=0; i<diff; i++){
        cout << c << endl;
    }
    if(start_col!=end_col){
        int d=abs(end_col-start_col);
        if(start_col<end_col){
            for(int i=0; i<d; i++){
                cout << "R" << endl;
            }
        }
        else{
            for(int i=0; i<d; i++){
                cout << "L" << endl;
            }
        }
    }
    else if(start_row!=end_row){
        int d=abs(end_row-start_row);
        if(start_row<end_row){
            for(int i=0; i<d; i++){
                cout << "U" << endl;
            }
        }
        else{
            for(int i=0; i<d; i++){
                cout << "D" << endl;
            }
        }
    }
    return 0;
}
