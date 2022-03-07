#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

// takes two integers as input, calculates num1^num2 and outputs answer
int power(int base, int exponent)
{
    int ans = 1;
    while (exponent)
    {
        ans *= base;
        exponent--;
    }
    return ans;
}

int main()
{
    IOS;

    int inputBase, inputExponent;
    cin >> inputBase >> inputExponent;

    cout << power(inputBase, inputExponent) << endl;

    return 0;
}