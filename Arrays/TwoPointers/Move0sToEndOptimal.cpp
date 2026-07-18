#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move0s(vector<int>& arr){

    int zeroPtr = -1;
    int arrLen = arr.size();
    for(int i=0; i<arrLen; i++){
        if(arr[i]==0){
            zeroPtr = i;
            break;
        }
    }
    if(zeroPtr == -1) return;

    for(int numsPtr = zeroPtr+1; numsPtr<arrLen; numsPtr++){
        if(arr[numsPtr]!=0){
            swap(arr[zeroPtr], arr[numsPtr]);
            zeroPtr++;
        }
    }

}

int main(){
    vector<int> arr = {1,2,0,3,4};
    cout << "Before" << endl;
    for(int num : arr){
        cout << num << " ";
    }

    move0s(arr);
    cout << "After" << endl;
    for(int num : arr){
        cout << num << " ";
    }
}