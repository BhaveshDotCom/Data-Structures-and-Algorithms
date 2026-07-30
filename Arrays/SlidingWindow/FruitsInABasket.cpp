#include<bits/stdc++.h>
using namespace std;

/*
int fruits(vector<int>& nums){
    int n = nums.size();
    int left = 0, right = 0;
    int maxFruits = 0;
    unordered_map<int,int> basket;
    while(right<n){
        basket[nums[right]]++;
        while(basket.size()>2){
            basket[nums[left]]--;
            if(basket[nums[left]]==0){
                basket.erase(nums[left]);
            }
            left++; 
        }
        maxFruits = max(maxFruits, right-left+1);
        right++;
    }
    return maxFruits;
}
*/

int fruits(vector<int>& nums){
    int n = nums.size();
    int left = 0, right = 0;
    int maxFruits = 0;
    unordered_map<int,int> basket;
    while(right<n){
        basket[nums[right]]++;
        if(basket.size()>2){
            basket[nums[left]]--;
            if(basket[nums[left]]==0) basket.erase(nums[left]);
            left++;
        }
        maxFruits= max(maxFruits, right-left+1);
        right++;
    }
    return maxFruits;
}

int main(){
    vector<int> nums = {0,1,2,2};
    cout << fruits(nums) << endl;
}