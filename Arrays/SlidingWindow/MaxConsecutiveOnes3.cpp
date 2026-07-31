#include<bits/stdc++.h>
using namespace std;
/*
int ones(vector<int>& nums, int k){
    int left = 0, right = 0, count=0, n=nums.size();
    unordered_map<int, int> freq;
    while(right<n){
        freq[nums[right]]++;
        if(freq[0]>k){
            freq[nums[left]]--;
            if(freq[nums[left]] == 0) freq.erase(nums[left]);
            left++;
        }
        count= max(count, right-left+1);
        right++;
    }
    return count;
}
*/
int ones(vector<int>& nums, int k){
    int left = 0, right = 0, count=0, zeros=0, n=nums.size();
    while(right<n){
        if(nums[right]==0) zeros++;
        if(zeros>k){
            if(nums[left]==0)zeros--;
            left++;
        }
        count = max(count, right-left+1);
        right++;
    }
    return count;
}
/*
int ones(vector<int>& nums, int k){
    int n =nums.size();
    int maxLen = 0;
    int zeros = 0;
    int left = 0;
    int right = 0;
    while(right < n){
        if(nums[right]==0){
            zeros++;
        }
        while(zeros>k){
            if(nums[left]==0){
                zeros--;
            }
            left++;
        }
        maxLen = max(maxLen, right-left+1);
        right++;
    }
    return maxLen ;
}
*/
int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    cout << ones(nums, 2) << endl;
}