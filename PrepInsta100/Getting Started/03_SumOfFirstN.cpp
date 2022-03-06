#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int sumOfFirstN(int maxNum)
{
    int sum = 0;
    for (int num = 1; num <= maxNum; num++)
    {
        sum += num;
    }
    return sum;
}

int main()
{
    IOS;

    int input;
    cin >> input;

    cout << sumOfFirstN(input) << endl;

    return 0;
}