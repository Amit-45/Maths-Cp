//clear means to put a zero in the position
#include <bits/stdc++.h>
using namespace std;
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int main()
{
    cout << clearBit(5, 2);
}

//Output:1
//Input :5-->0101
//1<<pos-->0100
//mask-->1011
//n & mask-->0101 & 1011-->0001
//Hence the output is 1
