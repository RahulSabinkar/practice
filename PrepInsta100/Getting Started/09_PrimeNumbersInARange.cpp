#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

bool isPrime(int num)
{
    // 0 and 1 are not prime numbers
    if (num < 2)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

void printPrimeNumbersBetween(int min, int max)
{
    if (min > max)
    {
        // Swap two variables
        min = min + max;
        max = min - max;
        min = min - max;
    }
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

bool isRangeValid(int num1, int num2)
{
    return (num1 > 1 || num2 > 1);
}

int main()
{
    IOS;

    int inputMin;
    int inputMax;

    cin >> inputMin >> inputMax;

    if (isRangeValid(inputMin, inputMax))
        printPrimeNumbersBetween(inputMin, inputMax);
    else
        cout << "INVALID RANGE";

    return 0;
}