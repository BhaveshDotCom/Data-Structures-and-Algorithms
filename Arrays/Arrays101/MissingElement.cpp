#include <iostream>
#include <vector>
using namespace std;

/*
Given an array arr[] of size n-1 with distinct integers in
the range of [1, n]. This array represents a permutation 
of the integers from 1 to n with one element missing. 
Find the missing element in the array.
*/

int missingNumber(vector<int>& arr){
    int expectedLen = arr.size() + 1;
    int ExpectedSum = expectedLen*(expectedLen+1)/2;
    int len = arr.size();
    int sum=0;
    for(int i=0; i<len; i++){
        sum+=arr[i];
    }
    return ExpectedSum - sum;
}

int main(){
    vector<int> arr = {1,2,3,4,6,7,8,9};
    cout << missingNumber(arr) << endl;
}
