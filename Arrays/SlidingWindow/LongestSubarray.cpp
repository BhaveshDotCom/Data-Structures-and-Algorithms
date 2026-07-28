#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int target){
    int left = 0, right = 0, sum = nums[0], n=nums.size(), maxLen = 0;
    while(right < n){
        while(left <= right && sum > target){
            sum-=nums[left];
            left++;
        }
        if(sum == target){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right < n) sum+=nums[right];
    }
return maxLen;
}

int main(){
    vector<int> nums = {3,1,2,0,0,0,1,1,1,0};
    cout << longestSubarray(nums, 3) << endl; 
}