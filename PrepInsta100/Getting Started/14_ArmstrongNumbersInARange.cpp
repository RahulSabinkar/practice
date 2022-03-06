#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int countDigits(int num)
{
    int digits = 0;
    while (num)
    {
        num /= 10;
        digits++;
    }
    return digits;
}

bool isArmstrongNumber(int num)
{
    if (num <= 9 && num >= -9)
        return true;

    int digits = countDigits(num);

    int originalNumber = num;
    int newNumber = 0;
    while (num != 0)
    {
        int lastDigit = num % 10;
        newNumber += pow(lastDigit, digits);
        num /= 10;
    }

    return (originalNumber == newNumber);
}

void printArmstrongNumbersBetween(int min, int max)
{
    if (min > max)
    {
        // swap variables
        min = min + max;
        max = min - max;
        min = min - max;
    }

    for (int num = min; num <= max; num++)
    {
        if (isArmstrongNumber(num))
            cout << num << " ";
    }
    cout << endl;
}

int main()
{
    IOS;

    int inputMin, inputMax;
    cin >> inputMin >> inputMax;

    printArmstrongNumbersBetween(inputMin, inputMax);

    return 0;
}