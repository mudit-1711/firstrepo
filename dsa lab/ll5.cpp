#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* create(Node* head, int x) {
    Node* n = new Node();
    n->data = x;
    n->prev = NULL;
    n->next = NULL;

    if (!head) return n;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;

    return head;
}

void forward(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        if (!temp->next) break;
        temp = temp->next;
    }
}

void backward(Node* tail) {
    Node* temp = tail;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
}

int main() {
    Node* head = NULL;
    int x;

    cout << "Enter elements (-1 to stop): ";
    while (cin >> x && x != -1)
        head = create(head, x);

    cout << "Forward Traversal -> ";
    Node* temp = head;
    while (temp && temp->next)
        temp = temp->next;

    forward(head);
    cout << endl;

    cout << "Backward Traversal -> ";
    backward(temp);

    return 0;
}