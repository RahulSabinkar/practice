#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int reverseNumber(int num)
{
    int reversedNumber = 0;
    while (num)
    {
        int lastDigit = num % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        num /= 10;
    }
    return reversedNumber;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    cout << reverseNumber(inputNumber) << endl;

    return 0;
}