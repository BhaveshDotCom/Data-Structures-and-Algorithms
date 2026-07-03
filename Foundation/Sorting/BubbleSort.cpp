#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        bool isSwapped = false; 
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwapped = true;
            }
        }
        if(!isSwapped) break;
        }
}

int main(){
    // int arr[] = {7,6,5,4,3,2,1};
    int arr[] = {1,2,3,4,5,6,7};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size_arr);

    for(int num : arr){
        cout << num << " ";
    }
    return 0;
}

