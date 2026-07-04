#include <iostream>
#include <vector>
using namespace std;

void insertion_sort_for_loop(vector<int> &arr){

    for(int i=1; i<arr.size(); i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}

void insertion_sort_while_loop(vector<int> &arr){
    for(int i=1; i< arr.size(); i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){  

    vector<int> arr = {1,0,2,6,3,9,6};
    insertion_sort_for_loop(arr);
    // insertion_sort_while_loop(arr);

    for(int ele : arr){
        cout << ele << " ";
    }

    return 0;
}