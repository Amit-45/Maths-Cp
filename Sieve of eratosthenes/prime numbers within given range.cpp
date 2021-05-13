//Program to print all the prime numbers within a given range
#include <bits/stdc++.h>
using namespace std;

void printPrime(int n)
{
  int prime[100] = {0};
  for (int i = 2; i <= n; i++)
  {
    if (prime[i] == 0)
    {
      for (int j = i * i; j <= n; j += i)
      {
        prime[j] = 1;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (prime[i] == 0)
      cout << i << " ";
  }
}
int main()
{
  int n;
  cin >> n;

  printPrime(n);
}

//Time complexity : n*log(log(n)) 
//Marked is represented by 1 and unmarked is represented by 0
//Last loop is to print unmarked elements(Those are the required prime numbers)
