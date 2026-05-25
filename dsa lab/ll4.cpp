#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* create(Node* head, int x) {
    Node* n = new Node();
    n->data = x;
    if (!head) {
        head = n;
        n->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = n;
        n->next = head;
    }
    return head;
}

void display(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back)";
}

int main() {
    Node* head = NULL;
    int x;

    cout << "Enter elements (-1 to stop): ";
    while (cin >> x && x != -1)
        head = create(head, x);

    cout << "Circular Linked List -> ";
    display(head);

    return 0;
}