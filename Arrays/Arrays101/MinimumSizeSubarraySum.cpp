#include<bits/stdc++.h>
using namespace std;

int MinimumSizeSubarraySum(vector<int>& nums, int k){
    int n = nums.size();
    int minLen = INT_MAX;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            if(sum>=k){
                minLen = min(minLen, j-i+1);
                break;
            }
        }
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