#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
     int i,j;
     cout<<"enter the number to find factorial of ";
     cin>>i;
     cout<<"factorial of "<<i<<" is "<<fact(i)<<endl;
     return 0;
}