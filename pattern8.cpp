#include <iostream>
using namespace std;
int main(){
    int i,n,j,m,num=2;
     cout<<"enter the number of rows";
     cin>>n;

     for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+2;
         }
         cout<<endl;
     }
     return 0;

}