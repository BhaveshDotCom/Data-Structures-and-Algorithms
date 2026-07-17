#include <iostream>
#include <map>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        int index = 0;
        while(count0--)nums[index++]=0;
        while(count1--)nums[index++]=1;
        while(count2--)nums[index++]=2;
    }

/*
void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        for(int i=0; i<count0; i++) nums[i]=0;
        for(int i=count0; i<count1+count0; i++) nums[i]=1;
        for(int i=count1+count0; i<nums.size(); i++) nums[i]=2;

    }
*/

int main(){
    vector<int> nums = {1,1,2,0,2,0,1};
    sortColors(nums);
    for(int num : nums){
        cout << num << " ";
    }
}