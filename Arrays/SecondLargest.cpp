#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int secondLargestElement(vector<int>& arr){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    if(arr.size()<2) return -1;

    for(int i=0; i<arr.size(); i++){

        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){

    vector<int> arr = {2,2};
    cout << secondLargestElement(arr) << endl;

    return 0;
}