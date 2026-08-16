#include<bits/stdc++.h>
using namespace std;

class MinimumElement {
public:
    int search(vector<int>& nums) {
        int minElem = INT_MAX;
        int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[low]<nums[mid]){
                minElem = min(minElem, nums[low]);
                low = mid+1;
            }
            else {
                minElem = min(minElem, nums[mid]);
                high = mid-1;
            }
        }
        return minElem;
    }
};

int main(){
    MinimumElement minEle;
    vector<int> nums = {4,5,6,7,0,1,2,3};
    cout << minEle.search(nums) << endl;
}