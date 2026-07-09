#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    }

    return true;
}


int main(){
    vector<int> arr = {1,1,2};
    cout << boolalpha << isSorted(arr) << endl;
}