#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// Brute O(n*n*n)
int subarrayWithLargestSum(vector<int> &nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum+=nums[k];
            }
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = { 1,2,3};
    cout << subarrayWithLargestSum(nums) << endl;
    return 0;
}