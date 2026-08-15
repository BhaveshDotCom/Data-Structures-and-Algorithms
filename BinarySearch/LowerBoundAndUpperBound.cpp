#include<bits/stdc++.h>
using namespace std;

// Lower Bound OR Ceil
int lowerBoundImplementation(vector<int> &arr, int target){
    int n = arr.size();
    int lowerBoundIdx = n;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=target){
            lowerBoundIdx = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return lowerBoundIdx;
}

// Floor
int floorImplementation(vector<int> &arr, int target){
    int n = arr.size();
    int floorIdx = -1;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]<=target){
            floorIdx = mid;
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return floorIdx;
}

int lowerBoundBuiltInFunction(vector<int> &arr, int target){
    // lower_bound : returns an iterator pointing to the first element that is greater than or equal to target
    int lowerBoundIdx = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    return lowerBoundIdx;
}

int upperBoundImplementation(vector<int> &arr, int target){
    int n = arr.size();
    int upperBoundIdx = n;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>target){
            upperBoundIdx = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return upperBoundIdx;
}
int upperBoundBuiltInFunction(vector<int> &arr, int target){
    // lower_bound : returns an iterator pointing to the first element that is greater than or equal to target
    int upperBoundIdx = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    return upperBoundIdx;
}

int applicationsOfLBUB(vector<int> &arr, int target){
    // first occurance: lower bound
    // last occurance: upper bound
    // Counting Occurrences
    int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int ub = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    return ub-lb;
}

int main(){
    vector<int> arr = {2,4,6,8,10,12};
    int target = 8;
    cout << "Lower Bound" << endl;
    cout << lowerBoundImplementation(arr, target) << endl;
    cout << lowerBoundBuiltInFunction(arr, target) << endl;
    cout << "Upper Bound" << endl;
    cout << upperBoundBuiltInFunction(arr, target) << endl;
    cout << upperBoundImplementation(arr, target) << endl;
    cout << "Counting Occurrences" << endl;
    vector<int> nums = {3,7,8,8,8,8,8,9,10};
    cout << applicationsOfLBUB(nums, target) << endl;
    cout << "Floor" << endl;
    nums = {5,7,8,9,10};
    cout << floorImplementation(nums, target) << endl;
    
}