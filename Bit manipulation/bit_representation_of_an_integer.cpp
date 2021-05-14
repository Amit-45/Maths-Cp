//Print the bit representation of an int number n:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5; 
    int i;
    for (int i = 31; i > 0; i--)
    {
        if (n & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}
//Input:5
//Output:00000000000000000000000000000101
