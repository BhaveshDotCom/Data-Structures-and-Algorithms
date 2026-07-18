#include <iostream>
#include <vector>
using namespace std;

void leftRotateByN(vector<int>& arr, int rotations){
    
    if(arr.empty()) return;
    int len = arr.size();
    rotations%=len;

    vector<int> temp(rotations);

    for(int i=0; i<rotations; i++){
        temp[i] = arr[i];
    }

    for(int j=rotations; j<len; j++){
        arr[j-rotations] = arr[j];
    }

    for(int k=len-rotations; k<len; k++){
        arr[k] = temp[k-(len-rotations)];
    }
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