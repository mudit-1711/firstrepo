#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int x) {
    Node* n = new Node{x, NULL};
    if (!head) { head = n; return; }
    Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
}

void deleteBegin(Node*& head) {
    if (!head) return;
    Node* t = head;
    cout << "Delete beginning -> " << t->data << endl;
    head = head->next;
    delete t;
}

void deleteEnd(Node*& head) {
    if (!head) return;
    if (!head->next) {
        cout << "Delete end -> " << head->data << endl;
        delete head;
        head = NULL;
        return;
    }
    Node* t = head;
    while (t->next->next) t = t->next;
    cout << "Delete end -> " << t->next->data << endl;
    delete t->next;
    t->next = NULL;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Initial List -> ";
    print(head);

    deleteBegin(head);
    deleteEnd(head);

    cout << "Updated List -> ";
    print(head);
}