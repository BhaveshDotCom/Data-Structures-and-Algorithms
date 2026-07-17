#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSubarrayWithSumK(vector<int> nums, int targetSum){
    int numsSize = nums.size();
    int longestLen = 0;

    for(int i=0; i<numsSize; i++){
        int sum = 0;
        for(int j=i; j<numsSize; j++){
            sum+=nums[j];
            if(sum==targetSum) longestLen = max(longestLen, j-i+1);
        }
    }
    return longestLen;
}

int main(){
    vector<int> nums = {1,1,2,1,1,1,2,3};
    cout << longestSubarrayWithSumK(nums, 3) << endl;

    return 0;
}