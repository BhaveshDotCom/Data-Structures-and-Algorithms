#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    if(nums.empty()) return 0;
    sort(nums.begin(), nums.end());
    int longest = 1, length = 1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]) {
            continue;
        }
        if(nums[i] == nums[i-1]+1) {
            length++;
        }
        else { 
            length = 1;
        }
        longest = max(longest, length);
    }
    return longest;
}

int main(){
    vector<int> nums = {9,2,4,3,8};
    cout << longestConsecutive(nums) << endl;
}   