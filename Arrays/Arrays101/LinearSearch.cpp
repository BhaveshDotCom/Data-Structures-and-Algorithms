#include<iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[], int target, int len){

    if(len == 0) return -1;

    for(int i=0; i<len; i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 14;
    cout << linearSearch(arr, target, len) << endl;
}