#include <iostream>
using namespace std;
int main(){
        int i,j,n;
        cout<<"enter a number of rows ";
        cin>>n;
         int m;
            cout<<"enter number of stars in a row ";
            cin>>m;
        for(i=1;i<=n;i++) {
            for(j=1;j<=m;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}