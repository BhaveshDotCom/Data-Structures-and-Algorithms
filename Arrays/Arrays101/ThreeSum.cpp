#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target){
    set<vector<int>> st;
    int len = nums.size();
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            for(int k=j+1; k<len; k++){
                if(nums[i]+nums[j]+nums[k]==target){
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int target = 0;
    auto arr = threeSum(nums, target);
    for(auto row : arr){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}