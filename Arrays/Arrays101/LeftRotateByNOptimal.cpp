#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotateByN(vector<int>& arr, int rotations){

    if(arr.empty()) return;
    int len = arr.size();
    rotations%=len;

    reverse(arr.begin(), arr.begin()+rotations);
    reverse(arr.begin()+rotations, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){
    int size;
    cout << "Enter Number of Elements: " << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter Elements: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int rotations;
    cout << "Enter Number of Rotations (R): " << endl;
    cin >> rotations;

    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;

    leftRotateByN(arr, rotations);

    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
}