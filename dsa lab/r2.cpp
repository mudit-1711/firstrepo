#include <iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int i,j;
    cout<<"enter the number";
    cin>>i;
    cout<<"fibonacci of "<<i<<" is "<<fib(i)<<endl;
    return 0;
}