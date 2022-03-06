#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

string checkEvenOrOdd(int num)
{
    return (num % 2 == 0) ? "EVEN" : "ODD";
}

int main()
{
    IOS;

    int input;
    cin >> input;

    cout << checkEvenOrOdd(input) << endl;

    return 0;
}