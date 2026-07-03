#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<=size-2; i++){
        int mini = i;
        for(int j=i; j<=size-1; j++){
            if(arr[mini]>arr[j]) mini = j;
        }
        // swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {5,7,3,1,12,2};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size_arr);

    for(int num : arr){
        cout << num << " ";
    }

    return 0;

}