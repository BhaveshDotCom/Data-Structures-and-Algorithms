#include <iostream>
#include <vector>
using namespace std;

int removeDuplicatesTwoPointers(vector<int>& arr){
    int firstPtr = 0;
    for(int secondPtr = 1; secondPtr<arr.size(); secondPtr++){
        if(arr[firstPtr]!=arr[secondPtr]){
            arr[firstPtr+1] = arr[secondPtr];
            firstPtr++;

        }
    }
    return firstPtr+1;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,3};
    cout << removeDuplicatesTwoPointers(arr) << endl;
}