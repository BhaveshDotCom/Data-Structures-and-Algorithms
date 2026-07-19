#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
    int len = nums.size();
    int pPtr = 0;
    int nPtr = 1;
    vector<int> ans(len, 0);
    for(int i=0; i<len; i++){
        if(nums[i]>0){
            ans[pPtr] = nums[i];
            pPtr+=2;
        }
        else{
            ans[nPtr] = nums[i];
            nPtr+=2;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    for(auto num : rearrangeArray(nums)){
        cout << num << " ";
    }
}