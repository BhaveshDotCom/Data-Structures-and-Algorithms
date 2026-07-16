#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSubarrayWithSumK(vector<int> nums, int targetSum){
    int maxLength = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=nums[k];
            }
            if(sum==targetSum){
                maxLength = max(maxLength, j-i+1);
            }
        }
    }
    return maxLength;
}

int main(){
    vector<int> nums = {1,1,2,1,1,4,2,3};
    cout << longestSubarrayWithSumK(nums, 3) << endl;

    return 0;
}