#include <bits/stdc++.h>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
using namespace std;

string checkPositiveOrNegative(int num)
{
    if (num > 0)
        return "POSITIVE";
    else if (num < 0)
        return "NEGATIVE";
    else
        return "ZERO";
}

int main()
{
    IOS;

    int input;
    cin >> input;

    cout << checkPositiveOrNegative(input) << endl;

    return 0;
}