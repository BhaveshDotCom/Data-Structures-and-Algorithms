#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    unordered_map<int, int> hash;
    for(int num : nums){
        hash[num]++;
    }
    for(auto it : hash){
        if(it.second > nums.size()/2) return it.first;
    }
    return -1;
}
int main(){
    vector<int> nums = {1,3,3,3,3,1,2};
    cout << majorityElement(nums) << endl;
    return 0;
}