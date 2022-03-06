#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int sumOfRange(int min, int max)
{
    int sum = 0;
    for (int i = min; i <= max; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    IOS;

    int inputMin;
    int inputMax;

    cin >> inputMin >> inputMax;

    cout << sumOfRange(inputMin, inputMax) << endl;

    return 0;
}