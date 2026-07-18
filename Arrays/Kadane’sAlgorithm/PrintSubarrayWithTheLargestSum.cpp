#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> kadaneAlgo(vector<int>& nums){
    int maxSum = INT_MIN;
    int sum = 0;
    int startIdx = -1, endIdx = -1, tempStart=-1;
    for(int i=0; i<nums.size(); i++){
        if(sum==0){
            tempStart = i;
        }
        sum+=nums[i];
        if(sum>maxSum){
            maxSum=sum;
            startIdx = tempStart;
            endIdx = i;
        }

        if(sum<0)sum=0;
    }
    return {startIdx, endIdx};
}

int main(){
    vector<int> nums = {4, -1, 2, -10, 3};

    vector<int> idx = kadaneAlgo(nums);
    cout << "Start " << idx[0] << endl;
    cout << "End " << idx[1] << endl;
    for(int i=idx[0]; i<=idx[1]; i++){
        cout << nums[i] << " ";
    }
}