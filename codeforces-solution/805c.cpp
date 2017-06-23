#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1)
        n = 2;
    n = n+1;
    n = n-2;
    cout << n/2 << endl;
    return 0;
}
