/*
 * Strong Number is a number in which the sum of the factorial of
 * individual digits of the numbers is equal to the number itself.
 */
#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int getFactorial(int num)
{
    int sum = 1;
    while (num > 1)
    {
        sum *= num;
        num--;
    }
    return sum;
}

bool isStrongNumber(int num)
{
    int result = 0;
    int lastDigit;
    for (int i = num; i; i /= 10)
    {
        lastDigit = i % 10;
        result += getFactorial(lastDigit);
    }
    // if they're both equal, then it's a strong number
    return (num == result);
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    isStrongNumber(inputNumber) ? cout << "Strong Number" << endl
                                : cout << "Not Strong Number" << endl;

    return 0;
}