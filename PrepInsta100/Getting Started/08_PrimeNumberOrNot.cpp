#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

bool isPrimeNumber(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    if (isPrimeNumber(inputNumber))
        cout << "PRIME NUMBER" << endl;
    else
        cout << "COMPOSITE NUMBER" << endl;
    return 0;
}