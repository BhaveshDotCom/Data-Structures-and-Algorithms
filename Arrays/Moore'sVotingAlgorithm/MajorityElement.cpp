#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){
    // MVA
    int ele;
    int votes=0;
    for(int i=0; i<nums.size(); i++){
        if(votes == 0){
            ele = nums[i];
            votes++;
        }
        else if(ele == nums[i]) votes++;
        else votes--;
    }
    // Verification
    int count = 0;
    for(int num : nums){
        if(num==ele) count++;
    }
    if(count > nums.size()/2) return ele;
    return -1;
}

int main(){
    vector<int> nums = {2,1,1,-3,-3,-3,-3};
    cout << majorityElement(nums) << endl;
    return 0;
}