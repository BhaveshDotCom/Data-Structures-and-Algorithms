#include<iostream>
#include<vector>
using namespace std;

vector<int> leader(vector<int>& nums){
    int len = nums.size();
    vector<int> leaders;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(nums[j]>nums[i]) break;
            else{
                leaders.push_back(nums[i]);
            }
        }
    }
}

int main(){
    vector<int> nums = {11,22,13,14,5};
    for(int num : leader(nums)){
        cout << num << " ";
    }
    return 0;
}