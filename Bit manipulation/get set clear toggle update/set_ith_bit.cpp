//sets the ith bit to one
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return (n | (1 << pos));
}
int main()
{
    cout << getBit(5, 1);
}

//Output:7
//Input:5-->0101
//After the condition-->0111 which equals 7
