#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

void printFibonacciUpto(int max)
{
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    int next;
    for (int i = 3; i <= max; i++)
    {
        // getting next value from recent two values
        next = first + second;
        cout << next << " ";

        // forwarding recent two values
        first = second;
        second = next;
    }
    cout << endl;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    // first two values are compulsory
    if (inputNumber <= 2)
        cout << "INVALID RANGE" << endl;
    else
        printFibonacciUpto(inputNumber);

    return 0;
}