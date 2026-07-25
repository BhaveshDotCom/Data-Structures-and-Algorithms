#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target){
    set<vector<int>> st;
    int len = nums.size();
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            for(int k=j+1; k<len; k++){
                for(int l=k+1; l<len; l++){
                    if(nums[i]+nums[j]+nums[k]+nums[l] == target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
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