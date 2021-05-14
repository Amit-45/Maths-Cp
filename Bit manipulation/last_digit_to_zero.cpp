#include <bits/stdc++.h>
using namespace std;
int lastBitToZero(int n)
{
    return (n & (n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << lastBitToZero(n);
}

//Input: 5
//Output:4-->since last one bit of x to zero
