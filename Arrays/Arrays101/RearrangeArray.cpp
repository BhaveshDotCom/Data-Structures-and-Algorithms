#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(vector<int> &nums){
    int len = nums.size();
    vector<int> positiveArray;
    vector<int> negativeArray;
    for(int i=0; i<len; i++){
        if(nums[i]>0) positiveArray.push_back(nums[i]);
        else negativeArray.push_back(nums[i]);
    }
    /*
    int p=0, n=0;
    for(int j=0; j<len; j++){
        if(j%2==0){
            nums[j] = positiveArray[p];
            p++;
        }
        else {
            nums[j] = negativeArray[n];
            n++;
        }
    }
    */
   for(int j=0; j<len/2; j++){
        nums[j*2] = positiveArray[j];
        nums[2*j+1] = negativeArray[j];
   }

    
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
    for(int num : nums){
        cout << num << " ";
    }
}