#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target){
    vector<vector<int>> triplets;
    sort(nums.begin(), nums.end());
    int len = nums.size();
    for(int low=0; low<nums.size(); low++){
        if(low>0 && nums[low] == nums[low-1]) continue;
        int mid = low+1, high = len-1;
        while(mid<high){
            int sum = nums[low]+nums[mid]+nums[high];
            if(sum == target){
                triplets.push_back({nums[low], nums[mid], nums[high]});
                mid++;
                high--;
                while(mid<high && nums[mid]==nums[mid-1]) mid++;
                while(mid<high && nums[high]==nums[high+1]) high--;
            }
            else if(sum < target){
                mid++;
            }
            else {
                high--;
            }
        }
    }
    return triplets;
}

int main(){
    vector<int> nums = {-2,-2,-2,-1,-1,-1,0,0,0,0,1,1,1,2,2,2};
    int target = 0;
    auto arr = threeSum(nums, target);
    for(auto row : arr){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}