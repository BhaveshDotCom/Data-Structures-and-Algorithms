#include<bits/stdc++.h>
using namespace std;

int ones(vector<int>& nums, int k){
    int n=nums.size();
    int maxLen = 0;
    for(int i=0; i<n; i++){
        int zeros = 0;
        for(int j=i; j<n; j++){
            if(nums[j]==0){
                zeros++;
            }
            if(zeros>k){
                break;
            }
            maxLen = max(maxLen, j-i+1);
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    cout << ones(nums, 2) << endl;
}