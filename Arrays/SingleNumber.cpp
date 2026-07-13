#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int singleNum;
    for(int i=0; i<nums.size(); i++){
        int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                count+=1;
            }
        }
        if(count==1) singleNum = nums[i];
    }
    return singleNum;
}

int main(){
    vector<int> nums = {1,2,1,2,3,5,3};
    cout << singleNumber(nums) << endl;
}