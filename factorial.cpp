#include <iostream>
using namespace std;

int main()
{
    int n;
    long long mul = 1;
do{
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
}while(n<0);
    
    {
        for (int i = 1; i <= n; i++)
        {
            mul = mul * i;
        }
        cout << "Factorial of " << n << " = " << mul << endl;
    }

    return 0;
}
