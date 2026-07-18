#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxOnes = 0;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
            if(count > maxOnes){
                maxOnes = count;
            }
        }
        else {
            count = 0;
        }
    }
    return maxOnes;
}
int main(){
    vector<int> arr = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(arr) << endl;
}