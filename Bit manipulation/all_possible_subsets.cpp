#include <bits/stdc++.h>
using namespace std;
void allPossibleSubsets(char arr[], int n)
{
    for (int i = 0; i < (1 << n); ++i)
    {
        for (int j = 0; j < n; ++j)
            if (i & (1 << j))
                cout << arr[j] << " ";
        cout << endl;
    }
}

int main()
{
    char arr[] = {'a', 'b', 'c', 'd'};
    int n = sizeof(arr) / sizeof(arr[0]);
    allPossibleSubsets(arr, n);
}
