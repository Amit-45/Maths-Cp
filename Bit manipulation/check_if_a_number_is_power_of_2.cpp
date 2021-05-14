//Check if a number is a power of 2
#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    return n && (!(n & (n - 1)));
}

int main()
{
    int n = 8;

    cout << isPowerOfTwo(n);
}
//Output:1
