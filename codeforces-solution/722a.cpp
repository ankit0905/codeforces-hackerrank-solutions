#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int type,h,m;
    cin >> type;
    scanf("%d:%d", &h, &m);
    if(m>59){
        m=m%10;
    }
    if(type==12){
        if(h>12&&(h%10==0))
            h=10;
		if(h>12)
		    h%=10;
		if(h==0)
		    h=1;
    }   
    else{
        if(h>23)h%=10;
    }
    printf("%02d:%02d",h,m);
    return 0;
}
