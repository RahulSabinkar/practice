#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

unsigned long long factorial(int num)
{
    unsigned long long ans = 1;

    while (num > 1)
    {
        ans *= num;
        num--;
    }

    return ans;
}

int main()
{
    IOS;

    int inputNumber;
    cin >> inputNumber;

    if (inputNumber < 0 || inputNumber > 20)
        cout << "Error. Enter values between 0-20." << endl;
    else
        cout << factorial(inputNumber) << endl;

    return 0;
}