#include <iostream>
using namespace std;
struct Node {
    int val, pri;
};
Node pq[100];
int n = 0;
void insert(int v, int p) {
    pq[n].val = v;
    pq[n].pri = p;
    n++;
}
void del() {
    if (n == 0) return;
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (pq[i].pri < pq[idx].pri)
            idx = i;
    }
    cout << "Delete -> " << pq[idx].val << endl;
    for (int i = idx; i < n - 1; i++)
        pq[i] = pq[i + 1];
    n--;
}
void display() {
    cout << "Remaining -> ";
    for (int i = 0; i < n; i++)
        cout << pq[i].pri << " ";
}
int main() {
    insert(10, 2);
    cout << "Insert (value=10, priority=2)\n";

    insert(20, 1);
    cout << "Insert (value=20, priority=1)\n";

    del();
    display();
}