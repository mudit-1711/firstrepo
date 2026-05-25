#include <iostream>
using namespace std;
int power(int base, int exp){
    if(exp==0 || exp==1){
        return base;
    }
    return base*power(base,exp-1);
}
int main(){
    int i,j;
    cout<<"enter the base";
    cin>>i;
    cout<<"enter the exponent";
    cin>>j;
    cout<<"power of "<<i<<" to the power of "<<j<<" is "<<power(i,j)<<endl;
    return 0;
}