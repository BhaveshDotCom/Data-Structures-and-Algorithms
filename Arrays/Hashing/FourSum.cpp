#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    set<vector<int>> st;
    int len = nums.size();
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            unordered_set<int> hash;
            for(int k=j+1; k<len; k++){
                long long complement = target - (nums[i]+nums[j]+nums[k]);
                if(hash.find(complement) != hash.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k], (int)complement};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[k]);
            }
            
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}


int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    auto arr = fourSum(nums, target);
    for(auto row : arr){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}