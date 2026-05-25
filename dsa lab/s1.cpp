#include <iostream>
using namespace std;
 int st[100];
     int top =-1;
 void push(int x){
        if(top==99){
            cout<<"stack overflow";
        }
        else{
            top++;
            st[top]=x;
        }
     }
     void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            top--;
        }
     }
     void display(){
        for(int i=top;i>=0;i--){
            cout<<st[i]<<" ";
        }
     }
int main(){
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    
    
    return 0;
}