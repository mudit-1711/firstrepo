#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* front = NULL;
node* rear = NULL;
void enqueue(int x){
    node* newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL){
        front = newnode;
        rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue(){
    if(front == NULL){
        cout<<"queue is empty";
    }
    else{
        node* temp = front;
        front = front->next;
        delete temp;
    }
}
void display(){
    node* temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
   enqueue(1);
   enqueue(2);
   enqueue(3);
   display();
   dequeue();
   display();
}