#include <iostream>
using namespace std;
int que[100];
int front =-1;
int rear =-1;
void enqueue(int x){
    if(rear==99){
        cout<<"queue overflow";
    }
    else{
        rear++;
        que[rear]=x;
    }
}
void dequeue(){
    if(front==-1){
        cout<<"queue underflow";
    }
    else{
        front++;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        cout<<que[i]<<" ";
    }
}
int main(){
    if(front==-1){
        front=0;
    }
   enqueue(1);
   enqueue(2);
   enqueue(3);
   display();
   dequeue();
   display();
    return 0;
}