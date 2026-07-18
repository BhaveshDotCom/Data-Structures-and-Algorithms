#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int singleElement(vector<int>& nums){

    int largest = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>largest) largest = nums[i];
    }

    vector<int> hash(largest+1,0);

    for(int j=0; j<nums.size(); j++){
        hash[nums[j]]++;
    }

    for(int i=0 ; i<hash.size(); i++){
        if(hash[i]==1) return i;
    }

    return -1;
}

int main(){

    vector<int> nums = {-1};
    cout << singleElement(nums) << endl;
}

// fail for negative numbers