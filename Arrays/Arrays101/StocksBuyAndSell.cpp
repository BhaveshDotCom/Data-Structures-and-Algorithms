#include<climits>
#include<iostream>
#include<vector>
using namespace std;

int buyAndSell(vector<int>& nums){
    int profit = 0;
    int n = nums.size();
    int buy = nums[0];
    for(int i=1; i<n; i++){
        buy = min(buy, nums[i]);
        profit = max(profit, nums[i]-buy);
    }
    return profit;
}

int main(){
    vector<int> nums = {2, 4, 1, 7};
    cout << buyAndSell(nums) << endl;
    nums = {4,1};
    cout << buyAndSell(nums) << endl;
}