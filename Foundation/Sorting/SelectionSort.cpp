#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){ // single number is alwats sorted
        int mini =i;
        for(int j=i; j<size; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        } 
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {5,34,23,12,11,0};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size_arr);

    for(int num : arr){
        cout << num << " ";
    }

}