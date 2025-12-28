#include <bits/stdc++.h>
using namespace std;
int main(){
          int i,j,k,n,m;
          cout<<"enter number of rows- ";
          cin>>n;
 while(m=1){
          for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(k=1;k<=2*i-1;k++){
                cout<<"O";
            }
            cout<<endl;
          }
   
        }
    return 0;
}
