#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int KadaneAlgorithm(vector<int>& nums){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        maxSum = max(sum, maxSum);
        if(sum<0)sum=0;
    }
    return maxSum;
}

int main(){
    vector<int> nums = {1, 2, -100, 5, 6};
    cout << KadaneAlgorithm(nums) << endl;
    return 0;
}