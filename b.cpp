#include <iostream>
#include <string>
using namespace std;

class Book {
    string t, a;
    int p; bool av;
public:
    void set() {
        cin >> ws;
        getline(cin, t);
        getline(cin, a);
        cin >> p >> av;
    }
    void show() {
        cout << t << " " << a << " " << p << " " << av << '\n';
    }
    int page() { return p; }
    string title() { return t; }
    bool available() { return av; }
};

int main() {
    Book b[6];
    for (int i = 0; i < 6; i++) b[i].set();

    int idx = 0;
    for (int i = 1; i < 6; i++)
        if (b[i].page() > b[idx].page())
            idx = i;

    b[idx].show();

    int lim; cin >> lim;

    for (int i = 0; i < 6; i++)
        if (b[i].title().size() > lim)
            b[i].show();

    int c = 0;
    for (int i = 0; i < 6; i++)
        if (b[i].available())
            c++;

    cout << c;
}