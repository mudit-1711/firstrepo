#include <iostream>
using namespace std;
int main(){

     int n ,m,i,j;
     cout<<"enter number of rows ";
     cin>>n;
     cout<<"enter number of numbers in a row ";
     cin>>m;
      for(i=1;i<=n;i++){
           for(j=1;j<=m;j++){
            cout<<j<<" ";
           }
        cout<<endl;

      }

    return 0;
}