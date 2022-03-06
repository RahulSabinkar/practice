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

bool isPalindrome(int num)
{
    if (num == reverseNumber(num))
        return true;
    return false;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    if (inputNumber <= 9 && inputNumber >= -9 || isPalindrome(inputNumber))
        cout << "PALINDROME" << endl;
    else
        cout << "NOT PALINDROME" << endl;

    return 0;
}