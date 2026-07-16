#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int> nums, int target){
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(i!=j){
                if(nums[i]+nums[j]==target){
                    return true;
                }
            }
        }
    }
    return false;
}

vector<vector<int>> twoSumNums(vector<int> nums, int target){
    vector<vector<int>> ans;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            {
                if(nums[i]+nums[j]==target){
                    ans.push_back({nums[i],nums[j]});
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,5};
    cout << boolalpha << twoSum(nums, 4);
    cout << endl;
    for(auto ele : twoSumNums(nums,4)){
        for(auto num : ele){
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
}