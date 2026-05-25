#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBegin(Node*& head, int x) {
    Node* n = new Node{x, head};
    head = n;
}

void insertEnd(Node*& head, int x) {
    Node* n = new Node{x, NULL};
    if (!head) { head = n; return; }
    Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
}

void insertPos(Node*& head, int x, int pos) {
    if (pos == 1) { insertBegin(head, x); return; }
    Node* t = head;
    for (int i = 1; i < pos - 1 && t; i++) t = t->next;
    if (!t) return;
    Node* n = new Node{x, t->next};
    t->next = n;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Insert at beginning: 5\n";
    insertBegin(head, 5);

    cout << "Insert at end: 40\n";
    insertEnd(head, 40);

    cout << "Insert at position 2: 15\n";
    insertPos(head, 15, 2);

    cout << "Linked List -> ";
    print(head);
}