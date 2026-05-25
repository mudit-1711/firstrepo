#include <iostream>
using namespace std;
int sumofn(int n){
    if(n==0 || n==1){
        return n;
    }
    return n+sumofn(n-1);
}
int main(){
    int i,j;
    cout<<"enter the number";
    cin>>i;
    cout<<"sum of first "<<i<<" natural numbers is "<<sumofn(i)<<endl;
    return 0;
}