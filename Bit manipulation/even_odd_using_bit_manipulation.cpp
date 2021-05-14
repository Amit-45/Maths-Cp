//And operator is used 
//If the last digit is 1 after the and operation then it is odd otherwise even
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
    return 0;
}
