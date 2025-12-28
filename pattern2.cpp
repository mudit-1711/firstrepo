#include <iostream>
using namespace std;
int main(){
   int i , j ,m ,n;
   cout<<"enter the mumber of rows";
   cin>>n;
   cout<<"enter number of stars in a row ";
   cin>>m;

   for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        cout<<"*";
    }
    cout<<endl;
   }



    return 0;
}