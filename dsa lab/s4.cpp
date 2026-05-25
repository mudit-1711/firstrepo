#include <iostream>
#include <stack>
using namespace std;

int main() {
    string postfix = "AB+CD-*";
    stack<string> s;

    for (char c : postfix) {
        if (isalnum(c)) {
            s.push(string(1, c));
        } else {
            string b = s.top(); s.pop();
            string a = s.top(); s.pop();
            string temp = c + a + b;
            s.push(temp);
        }
    }

    cout << s.top();
}