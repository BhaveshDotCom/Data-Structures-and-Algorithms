#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twoSum(vector<int> nums, int target){
    int size = nums.size();
    int fptr = 0;
    int sptr = size-1;
    vector<int> ans;

    for(int i=fptr; i<=sptr; i++){
        if(nums[fptr]+nums[sptr]>target) sptr--;
        else if(nums[fptr]+nums[sptr]<target) fptr++;
        else {
            ans.push_back(fptr);
            ans.push_back(sptr);
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    for(int num : twoSum(nums,9)){
        cout << num << " ";
    }
}