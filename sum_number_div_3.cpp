#include <iostream>
using namespace std;
int main()
{

    int sum = 0;
    int n, i;
    cout<<"enter a number ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "sum is " << sum;
    return 0;
}