#include<iostream>
#include<vector>
using namespace std;
/*
A1 = {1,3,3,4,5,6} s=6
A2 = {2,2,3,4,5,5} s=6
*/

vector<int> intersection(vector<int>& arr1, vector<int>& arr2){
    vector<int> intsArr;
    int ptr1 = 0, ptr2 = 0;
    while(ptr1<arr1.size() && ptr2<arr2.size()){
        if(arr1[ptr1]<arr2[ptr2]){
            ptr1++;
        }
        else if(arr1[ptr1]>arr2[ptr2]){
            ptr2++;
        }
        else{
            intsArr.push_back(arr1[ptr1]);
            ptr1++;
            ptr2++;
        }
    }

    return intsArr;
}

int main(){
    vector<int> arr1 = {1,3,3,4,5,6};
    vector<int> arr2 = {2,2,3,4,5,5};

    for(int ele : intersection(arr1, arr2)){
        cout << ele << " ";
    }
}

// TC O(n1+n2)
// SC O(1)