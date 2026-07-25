#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target){
    vector<vector<int>> quad;
    sort(nums.begin(), nums.end());
    int len = nums.size();
    for(int left=0; left<len; left++){
        if(left>0 && nums[left] == nums[left-1]) continue;
        for(int low=left+1; low<len; low++){  
            if(low>left+1 && nums[low] == nums[low-1]) continue;
            int mid = low+1, high = len-1;
            while(mid<high){
                long long sum = 1LL * nums[low]+nums[mid]+nums[high]+nums[left];
                if(sum == target){
                    quad.push_back({nums[left],nums[low], nums[mid], nums[high]});
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
    }
    return quad;
}

int main(){
    vector<int> nums = {-1,-5,-5,-3,2,5,0,4};
    int target = -7;
    auto arr = threeSum(nums, target);
    if(arr.empty()) cout << "[]" << endl;
    for(auto row : arr){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}