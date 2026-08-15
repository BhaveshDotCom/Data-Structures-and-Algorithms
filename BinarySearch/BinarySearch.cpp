#include<bits/stdc++.h>
using namespace std;

// Iterative Method
int BinarySearchIterative(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

// Recursive Method
int BinarySearchRecursive(vector<int> &arr, int low, int high, int target){
    if(high < low){
        return -1;
    }
    int mid = low+(high-low)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return BinarySearchRecursive(arr, mid+1, high, target);
    }
    else {
        return BinarySearchRecursive(arr, low, mid-1, target);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int target = 4;
    cout << BinarySearchIterative(arr, target) << endl;
    cout << BinarySearchRecursive(arr, 0, arr.size()-1, target) << endl;

}