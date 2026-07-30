#include<bits/stdc++.h>
using namespace std;

/*
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0;
    int n=nums.size();
    int count = 0, prod = 1;
    int left = 0;
    for(int right=0; right<n; right++){
        prod*=nums[right];
        while(prod>=k){
            prod/=nums[left];
            left++;
        }
        count+=right-left+1;
    }
    return count;
}
*/

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0;
    int n=nums.size();
    int count = 0, prod = 1;
    int left = 0, right = 0;
    while(right<n){
        prod*=nums[right];
        while(prod>=k){
            prod/=nums[left];
            left++;
        }
        count+= right-left+1;
        right++;
    }
    
    return count;
}

int main(){
    vector<int> nums = {10,5,2,6};
    cout << numSubarrayProductLessThanK(nums, 100) << endl;
}