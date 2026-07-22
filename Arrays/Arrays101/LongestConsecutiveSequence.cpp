#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>& nums, int ele){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==ele) return true;
    }
    return false;
}

int longestConsecutiveSequence(vector<int>& nums){
    if(nums.empty()) return 0;
    int longest = 1;
    int len = nums.size();
    for(int i=0; i<len; i++){
        int start = nums[i];
        int count = 1;
        while(linearSearch(nums, start+1)){
            count++;
            start++;
        }
        longest = max(longest, count);
    }
    return longest;
}

int main(){
    vector<int> nums = {1,3,2,4,6};
    cout << longestConsecutiveSequence(nums) << endl;
}