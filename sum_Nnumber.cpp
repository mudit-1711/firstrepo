#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n ,i ;
    cout << "enter the number till where you need sum - ";
    cin >> n;

    for(i = 1; i <= n; i++){
        sum = sum + i;
    }

    cout<<"sum= "<<sum;
    return 0;
}