#include<iostream>
#include<vector>
using namespace std;

int maxOnes(vector<int> nums){
    int winStart = 0, maxLen=0;
    for(int winEnd=0; winEnd<nums.size(); winEnd++){
        if(nums[winEnd]==1){
            maxLen = max(maxLen, winEnd-winStart+1);
        }
        else {
            winStart = winEnd+1;
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {0, 0, 1, 1};
    cout << maxOnes(nums) << endl;
    return 0;
}