#include<bits/stdc++.h>
using namespace std;

int MinimumSizeSubarraySum(vector<int>& nums, int k){
    int right = 0, left = 0;
    int n = nums.size(), sum = 0, minLen = INT_MAX;
    while(right < n){
        sum+=nums[right];
        while(sum>=k){
            minLen = min(minLen, right-left+1);
            sum-=nums[left];
            left++;
        }
        right++;
        
    }
    return (minLen == INT_MAX) ? 0 : minLen;
}

int main(){

    vector<int> nums1 = {1,4,4};
    cout << MinimumSizeSubarraySum(nums1, 7) << endl;
    vector<int> nums2 = {1,1,1,1,1,1,1,1};
    cout << MinimumSizeSubarraySum(nums2, 4) << endl;
    vector<int> nums3 = {2,3,1,2,4,3};
    cout << MinimumSizeSubarraySum(nums3, 11) << endl;
}