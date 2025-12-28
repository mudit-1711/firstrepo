#include <iostream>
using namespace std;
int main(){
    int n,i,m,j;
    cout<<"enter the number of rows ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout<<j;
        }
       cout<<endl;
    }
    return 0;
}