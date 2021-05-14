/*

• __builtin_clz(x): the number of zeros at the beginning of the number
• __builtin_ctz(x): the number of zeros at the end of the number
• __builtin_popcount(x): the number of ones in the number
• __builtin_parity(x): the parity (even or odd) of the number of ones

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5328;
    cout << __builtin_clz(x) << "\n";
    cout << __builtin_ctz(x) << "\n";
    cout << __builtin_popcount(x) << "\n";
    cout << __builtin_parity(x) << "\n";
}

/* Output:
19
4
5
1
*/
