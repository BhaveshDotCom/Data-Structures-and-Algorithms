#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secondSmallestElement(vector<int>& arr){
    if(arr.size()<2) return -1;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i=0; i< (int)arr.size(); i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]>smallest){
            secondSmallest = arr[i];
        }
    }

    return secondSmallest == INT_MAX ? -1 : secondSmallest;
}

int main(){
    vector<int> arr = {1,1};
    cout << secondSmallestElement(arr) << endl;
}