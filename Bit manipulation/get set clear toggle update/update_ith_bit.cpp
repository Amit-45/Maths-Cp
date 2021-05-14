//clear means to put a zero in the position
#include <bits/stdc++.h>
using namespace std;
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = (n & mask);
    return (n | (value << pos));
}
int main()
{
    cout << updateBit(5, 1, 1);
}

//Output:7
//Input :5-->0101
//position taken = 1
//1<<pos-->0010
//mask-->1101
//n & mask-->0101 & 1101-->0101
//1<<pos-->0010
//0101 | 0010-->0111
//Hence the output is 7
