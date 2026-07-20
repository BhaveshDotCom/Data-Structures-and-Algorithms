#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int> nums, int target){
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target){
                return true;
            }
        }
    }
    return false;
}
 
// any one pair
vector<int> twoSumNums(vector<int> nums, int target){
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,5};
    cout << boolalpha << twoSum(nums, 4);
    cout << endl;
    for(auto num : twoSumNums(nums,4)){
        cout << num << " ";
    }
    cout << endl;
    cout << endl;
}
