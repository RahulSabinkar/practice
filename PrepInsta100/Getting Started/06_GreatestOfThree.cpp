#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

int greatestOfThree(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;
}

int main()
{
    IOS;

    int inputNum1;
    int inputNum2;
    int inputNum3;

    cin >> inputNum1 >> inputNum2 >> inputNum3;

    cout << greatestOfThree(inputNum1, inputNum2, inputNum3) << endl;

    // using in-built max function
    // cout << max(inputNum1, max(inputNum2, inputNum3)) << endl;

    return 0;
}