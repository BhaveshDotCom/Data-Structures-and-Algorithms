#include<bits/stdc++.h>
using namespace std;

int fruits(vector<int>& nums){
    int n=nums.size();
    int maxFruits = 0;
    for(int i=0; i<n; i++){
        set<int> st;
        for(int j=i; j<n; j++){
            st.insert(nums[j]);
            if(st.size()<=2){
                maxFruits = max(maxFruits, j-i+1);
            }
            else {
                break;
            }
        }
    }
    return maxFruits;
}

int main(){
    vector<int> nums = {0,1,2,2};
    cout << fruits(nums) << endl;
}