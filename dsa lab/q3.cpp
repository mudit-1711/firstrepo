#include <iostream>
using namespace std;
#define N 5
int q[N], front = -1, rear = -1;
void enqueue(int x){
    if((rear+1)%N == front) cout<<"Full\n";
    else{
        if(front==-1) front=rear=0;
        else rear=(rear+1)%N;
        q[rear]=x;
    }
}
void dequeue(){
    if(front==-1) cout<<"Empty\n";
    else if(front==rear) front=rear=-1;
    else front=(front+1)%N;
}
void display(){
    if(front==-1) return;
    int i=front;
    while(true){
        cout<<q[i]<<" ";
        if(i==rear) break;
        i=(i+1)%N;
    }
    cout<<endl;
}
int main(){
    enqueue(1); enqueue(2); enqueue(3);
    display();
    dequeue();
    display();
}