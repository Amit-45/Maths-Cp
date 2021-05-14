//Count the number of ones in binary representation of a given number
#include <bits/stdc++.h>
using namespace std;
int countOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int n = 14;

    cout << countOnes(n);
}
