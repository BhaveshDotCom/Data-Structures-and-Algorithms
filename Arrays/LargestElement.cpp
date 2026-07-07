#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int largestElementBrute(vector<int>& arr){
    sort(arr.begin(), arr.end()); // O(nlogn)
    return arr[arr.size()-1];
}

int largestElementOptimal(vector<int> arr){
    int largest = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}

int main(){
    vector<int> arr = {1,9,3,10,49,28,47,2,97};
    // cout << largestElementBrute(arr) << endl;
    cout << largestElementOptimal(arr) << endl;
}