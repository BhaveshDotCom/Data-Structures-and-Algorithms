#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DNF(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }

        else if(nums[mid]==1) mid++;

        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = {1,1,0,0,2,1,0,2,2,1,0,1,1};
    DNF(nums);
    for(int num : nums){
        cout << num << ' ';
    }
}