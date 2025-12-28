#include <iostream>
using namespace std;
int main(){
      cout<<"enter the number you want to check";
      int n,i;
      bool isprime = true;
      cin>>n;

      for(i=2;i<=n-1;i++){

        if(n%i==0){
            isprime = false;
            break;
        }
      }
       if(isprime==true){
        cout<<"prime number \n";
       }else{
        cout<<"number is not prime\n";
       }
 return 0;
}