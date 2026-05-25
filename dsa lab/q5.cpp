#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<char> q;
    q.push('A');
    q.push('B');
    q.push('C');
    cout << "Customers: A B C\n";
    while (!q.empty()) {
        cout << "Serving -> " << q.front() << endl;
        q.pop();
    }
    cout << "Queue Empty";
    return 0;
}