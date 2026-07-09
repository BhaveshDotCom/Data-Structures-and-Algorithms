#include <iostream>
#include <vector>
using namespace std;

void rightRotateByOne(vector<int>& arr){

    if(arr.empty()) return;

    int temp = arr[arr.size()-1];
    for(int ptr=arr.size()-1; ptr>0; ptr--){
        arr[ptr] = arr[ptr-1];
    }
    arr[0] = temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rightRotateByOne(arr);
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}