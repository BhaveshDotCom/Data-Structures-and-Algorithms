#include<bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size();
    int count = 0;
    for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=i; j>=0; j--){
            prod*=nums[j];
            if(prod < k )count++;
            else break;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {686, 28, 455, 675, 605, 29, 942, 48, 502, 889, 854, 206, 231, 796, 272, 565, 887, 969, 558, 13, 22, 455, 145, 804, 15};
    cout << numSubarrayProductLessThanK(nums, 515854) << endl;
}