#include <iostream>
using namespace std;
int main() {
    int i, k;
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int arr[100];
    cout << "Type " << n << " numbers: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the position you want to delete: ";
    cin >> k;
    if(k < 0 || k >= n) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    for(i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "\nNew array after deletion:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
