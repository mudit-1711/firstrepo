#include <iostream>
using namespace std;
int main(){
         
    int i,j,n;
    char ch;
       cout<<"enter the number of rows";
       cin>>n;
       cout<<"enter the charcter you want to start from";
       cin>>ch;
         for(i=1;i<=n;i++){

            for(j=1;j<=i;j++){
                cout<<ch;
            }
            ch=ch+1;
            cout<<endl;
         }



    return 0;
}