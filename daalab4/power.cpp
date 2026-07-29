#include <bits/stdc++.h>
using namespace std;
void iterate(int a,int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*a;
    }
    cout<<ans;
}
int powerrecurssion(int a,int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return a;
    }
    else {
        int temp=powerrecurssion(a,n/2);
        if(n%2==0){
            return temp*temp;
        }
        else{
            return temp*temp*a;
        }
    }
}
int main(){
    int a,n;
    cout<<"enter base ";
    cin>>a;
    cout<<"enter power";
    cin>>n;
    iterate(a,n);
    cout<<endl;
    cout<<powerrecurssion(a,n);
}