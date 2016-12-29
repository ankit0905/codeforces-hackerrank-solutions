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
    int n,m,k;
    cin >> n >> m >> k;
    int m1 = 2*m;
    char c;
    if(k%2==0){
        c='R';
    }
    else{
        c='L';
    }
    int lane = (int)ceil((double)k/m1), desk;
    int num = k-((lane-1)*m1);
    desk = (int)ceil((double)num/2);
    cout << lane << " " << desk << " " << c << endl;
	return 0;
}
