#include<iostream>
#include<vector>
using namespace std;

vector<int> alternateElements(vector<int> &nums){
    vector<int> posArr, negArr;
    int len = nums.size();
    for(int i=0; i<len; i++){
        if(nums[i]>0) posArr.push_back(nums[i]);
        else negArr.push_back(nums[i]);
    }

    int positiveCount = posArr.size(),negativeCount = negArr.size();
    int commonLen = min(positiveCount,negativeCount);
    for(int i=0; i<commonLen; i++){
        nums[2*i]=posArr[i];
        nums[2*i+1]=negArr[i];
    }

    int index = commonLen*2;
    for(int i=commonLen; i<positiveCount; i++){
        nums[index++] = posArr[i];
    }
    for(int i=commonLen; i<negativeCount; i++){
        nums[index++] = negArr[i];
    }

    return nums;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4,4};
    for(int num : alternateElements(nums)){
        cout << num << " ";
    }
}