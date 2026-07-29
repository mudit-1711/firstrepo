#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums, int low, int mid, int high) {
    vector<int> temp;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (nums[i] < nums[j])
            temp.push_back(nums[i++]);
        else
            temp.push_back(nums[j++]);
    }

    while (i <= mid)
        temp.push_back(nums[i++]);

    while (j <= high)
        temp.push_back(nums[j++]);

    int k = 0;
    for (int i = low; i <= high; i++)
        nums[i] = temp[k++];
}
void mergesort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    mergesort(nums, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}