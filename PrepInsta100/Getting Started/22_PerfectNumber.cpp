/*
 * A perfect number is a number in which the sum of the proper positive
 * divisors of the number is equal to the number itself.
 */
#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

bool isPerfectNumber(int num)
{
    // since every positive number has '1' as factor
    int result = 1;

    for (int i = 2; i <= num / 2; i++)
    {
        // if this is true, it means 'i' is a factor
        if (num % i == 0)
            result += i;
    }
    // if they're both equal then it's a perfect number
    return (num == result);
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    isPerfectNumber(inputNumber) ? cout << "Perfect Number" << endl
                                 : cout << "Not Perfect Number" << endl;

    return 0;
}