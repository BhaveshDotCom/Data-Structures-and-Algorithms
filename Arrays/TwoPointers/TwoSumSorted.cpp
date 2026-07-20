#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target){
    int size = nums.size();
    int fptr = 0;
    int sptr = size-1;

    while(fptr<sptr){
        if(nums[fptr]+nums[sptr]>target) sptr--;
        else if(nums[fptr]+nums[sptr]<target) fptr++;
        else {
            return {fptr, sptr};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {2,7,11,15};
    for(int num : twoSum(nums,9)){
        cout << num << " ";
    }
}