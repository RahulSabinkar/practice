#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int greatestOfTwo(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int main()
{
    IOS;

    int inputNum1;
    int inputNum2;

    cin >> inputNum1 >> inputNum2;

    cout << greatestOfTwo(inputNum1, inputNum2) << endl;

    return 0;
}