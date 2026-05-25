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
    cout << "Enter at which position you want to enter: ";
    cin >> k;
    if(k < 0 || k > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }
    int value;
    cout << "Value you want to enter: ";
    cin >> value;
    for(i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = value;
    n++;

    cout << "\nNew array:" << endl;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
