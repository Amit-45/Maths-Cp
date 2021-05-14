#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    cout << getBit(5, 2);
}

//Output:1
//Number is 5 and its 2nd bit is found
