#include<bits/stdc++.h>
using namespace std;

int longestSubarrayngth(vector<int>& nums, int target){
    int n = nums.size();
    map<int, int> prefixSum; // (sum, idx)
    int maxLen = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        if(sum == target){
            maxLen = max(maxLen, i+1);
        }

        int rem = sum-target;
        if(prefixSum.find(rem) != prefixSum.end()){
            maxLen = max(maxLen, i-prefixSum[rem]);
        }

        if(prefixSum.find(sum) == prefixSum.end()){
            prefixSum[sum] = i;
        }
    }
    return maxLen;
}


int main(){
    vector<int> nums = {2, 3, 5, 1, 9,0,0};
    cout << longestSubarrayngth(nums, 10) << endl; 
}