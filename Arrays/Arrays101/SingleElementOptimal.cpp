#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int singleNumber(vector<int>& nums){

    unordered_map<long, int> freq;
    for(int num : nums){
        freq[num]+=1;
    }

    int singleNum;
    for(auto &it : freq){
        if(it.second==1){
            singleNum = it.first;
        }
    }
    return singleNum;
}

int main(){
    vector<int> nums = {1,1,2,3,3,2,4,4,-4};
    cout << singleNumber(nums) << endl;
}