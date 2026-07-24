#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target) {
    set<vector<int>> st;
    int n = nums.size();
    for(int i=0; i<n; i++){
        unordered_set<int> hash;
        for(int j=i+1; j<n; j++){
            int complement = target -(nums[i]+nums[j]);
            if(hash.find(complement) != hash.end()){
                vector<int> temp = {nums[i], nums[j], complement};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(nums[j]);
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
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