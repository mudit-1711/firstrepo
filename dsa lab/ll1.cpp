#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insert(int x) {
    Node* newnode = new Node;
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    insert(1);
    insert(2);
    insert(3);
    display();
}