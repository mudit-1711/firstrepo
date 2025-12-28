#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    cout << "enter a number ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout << "O";
        }
        cout << "\n";
    }

    return 0 ;
}