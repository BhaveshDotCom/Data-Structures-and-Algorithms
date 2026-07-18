#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int subarrayWithLargestSum(vector<int>& nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            maxSum = max(sum,maxSum);
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = { 1,5,2};
    cout << subarrayWithLargestSum(nums) << endl;
    return 0;
}