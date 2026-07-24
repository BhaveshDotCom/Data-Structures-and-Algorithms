#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    if(nums.empty()) return 0;
    unordered_set<int> st;
    int len = nums.size();
    int longest = 1;

    for(int i=0; i<len; i++){
        st.insert(nums[i]);
    }
    
    for(int ele : st){
        if(st.find(ele-1) == st.end()){
            int count = 1, start = ele;
            while(st.find(start+1) != st.end()){
                count = count+1;
                start = start+1;
            }
            longest = max(longest, count);
        }   
    }
    return longest; 
}

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums) << endl;
}   