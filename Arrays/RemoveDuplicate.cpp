#include <iostream>
#include <vector>
using namespace std;

int removeDuplicatesTwoPointers(vector<int>& nums){
    int firstPtr = 0;
    for(int secondPtr = 1; secondPtr<nums.size(); secondPtr++){
        if(nums[firstPtr]!=nums[secondPtr]){
            nums[firstPtr+1] = nums[secondPtr];
            firstPtr++;

        }
    }
    return firstPtr+1;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3,3};
    cout << removeDuplicatesTwoPointers(nums) << endl;
}