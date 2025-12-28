#include <iostream>
using namespace std ;
int main(){
    char ch;
    cout<<"Enter the character you want to check ";
      cin>>ch;

      if((ch>='a')&&(ch<='z')){
        cout<<"character is lowercase";
      }else if((ch>='A')&&(ch<='Z')){
        cout<<" character is uppercase ";
      }else{
        cout<<"not a uppercase or lowercase character \n Try again ";
      }
    return 0;
}