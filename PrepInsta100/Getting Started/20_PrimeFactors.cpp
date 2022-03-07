#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

bool isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}

void printPrimeFactors(int num)
{
    if (num < 2)
        return;

    for (int factor = 2; factor <= num / 2; factor++)
        if (num % factor == 0)
            if (isPrime(factor))
                cout << factor << " ";

    cout << endl;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    printPrimeFactors(inputNumber);

    return 0;
}