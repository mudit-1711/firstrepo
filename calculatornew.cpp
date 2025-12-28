#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "enter number 1 and number 2  ";
    cin >> a >> b;
    cout << "enter the operator ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        if (b != 0)
        {
            cout << a / b;
        }
        else
        {
            cout << "cant divide by zero";
        }
        break;

    default:
        cout << "nikal jaa ";
    }

    return 0;
}