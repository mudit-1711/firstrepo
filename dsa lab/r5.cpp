#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int i,j;
    cout<<"enter the two numbers";
    cin>>i>>j;
    cout<<"gcd of "<<i<<" and "<<j<<" is "<<gcd(i,j)<<endl;
    return 0;
}