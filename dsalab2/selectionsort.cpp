//selection sort
#include <iostream>
#include <vector>
using namespace std;
void selectionsort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        swap(v[i], v[min_idx]);
    }
}
int main() {
    int i,n;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    selectionsort(v);
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
//best case o(n^2)
// worst case o(n^2)
//average case o(n^2)