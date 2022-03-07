#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

void printFactorsOf(int num)
{
    if (num < 0)
    {
        for (int i = -1; i >= num / 2; i--)
        {
            if (num % i == 0)
                cout << i << ", ";
        }
        cout << num << endl;
        num = abs(num);
    }
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            cout << i << ", ";
    }
    cout << num << endl;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    if (inputNumber == 0)
        cout << "Invalid input. Enter negative or positve integers only." << endl;
    else
        printFactorsOf(inputNumber);

    return 0;
}