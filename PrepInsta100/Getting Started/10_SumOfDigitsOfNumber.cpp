#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    return sum;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    cout << sumOfDigits(inputNumber) << endl;

    return 0;
}