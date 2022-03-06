#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

bool isLeapYear(int year)
{
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main()
{
    IOS;

    int inputYear;
    cin >> inputYear;

    if (isLeapYear(inputYear))
        cout << "LEAP YEAR" << endl;
    else
        cout << "NOT LEAP YEAR" << endl;

    return 0;
}