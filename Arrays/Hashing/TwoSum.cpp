#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {2,7,8,9};
    for(int num : twoSum(nums, 10)){
        cout << num << " ";
    }
}