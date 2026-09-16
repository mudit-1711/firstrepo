#include <iostream>
#include <vector>
#include <climits>
#include <utility>

using namespace std;

pair<int, int> findMinMax(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return {0, 0};
    
    int minVal, maxVal;
    int i = 0;
    
    if (n % 2 != 0) {
        minVal = arr[0];
        maxVal = arr[0];
        i = 1;
    } else {
        if (arr[0] < arr[1]) {
            minVal = arr[0];
            maxVal = arr[1];
        } else {
            minVal = arr[1];
            maxVal = arr[0];
        }
        i = 2;
    }
    
    while (i < n - 1) {
        if (arr[i] < arr[i + 1]) {
            if (arr[i] < minVal) minVal = arr[i];
            if (arr[i + 1] > maxVal) maxVal = arr[i + 1];
        } else {
            if (arr[i + 1] < minVal) minVal = arr[i + 1];
            if (arr[i] > maxVal) maxVal = arr[i];
        }
        i += 2;
    }
    
    return {minVal, maxVal};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pair<int, int> res = findMinMax(arr);
    cout << "Minimum: " << res.first << endl;
    cout << "Maximum: " << res.second << endl;
    return 0;
}
