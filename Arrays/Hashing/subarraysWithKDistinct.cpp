#include<bits/stdc++.h>
using namespace std;
int subarraysWithKDistinct(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i=0; i<n; i++){
        unordered_map<int, int> mp;
        for(int j=i; j<n; j++){
            mp[nums[j]]++;
            if(mp.size()==k){
                count++;
            }
            else if(mp.size()>k) break;
        }
    }
    return count;
}