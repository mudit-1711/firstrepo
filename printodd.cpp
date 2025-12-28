#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "enter the number till where you need to print the odd numbers - ";
    cin >> n;

    /*while(i <= n){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
          i=i+1;  
    }*/

      for(i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" \n";
        }
      }
    return 0;
}