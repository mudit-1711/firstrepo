#include <bits/stdc++.h>
using namespace std;
void iterate(vector<int>&nums){
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>mx){
            mx=nums[i];
        }
        if(nums[i]<mn){
            mn=nums[i]; 
        }
    }
    cout<<mx<<" "<<mn<<endl;
}
pair<int, int> minmaxrecurssion(vector<int>& nums, int low, int high) {
    if (low == high) {
        return {nums[low], nums[low]};
    }
    if (high == low + 1) {
        if (nums[low] < nums[high]) {
            return {nums[low], nums[high]};
        } else {
            return {nums[high], nums[low]};
        }
    }
    int mid = low + (high - low) / 2;
    pair<int, int> left = minmaxrecurssion(nums, low, mid);
    pair<int, int> right = minmaxrecurssion(nums, mid + 1, high);
    return {min(left.first, right.first), max(left.second, right.second)};
}
int main(){
    int i,j,n;
    cout<<"enter size ";
    cin>>n;
    vector<int>nums(n);
    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    iterate(nums);
    pair<int, int> res = minmaxrecurssion(nums, 0, n - 1);
    cout << res.second << " " << res.first << endl;
}