#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int smallestElement(vector<int>& arr){
    int smallest = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    return smallest;
}

int main(){

    vector<int> arr = {10,4,-2,8,1};
    cout << smallestElement(arr) << endl;
}