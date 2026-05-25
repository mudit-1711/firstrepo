#include <iostream>
#include <stack>
using namespace std;
void removeMiddle(stack<int>& s, int k) {
    if (k == 1) {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    removeMiddle(s, k - 1);
    s.push(temp);
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int mid = (s.size() / 2) + 1;
    removeMiddle(s, mid);
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}