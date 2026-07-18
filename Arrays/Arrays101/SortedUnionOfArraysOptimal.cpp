#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArr(vector<int>& arr1, vector<int>& arr2){
    int lenArr1 = arr1.size();
    int lenArr2 = arr2.size();

    int ptr1 = 0, ptr2 = 0;
    vector<int> ansUnionArr;

    while(ptr1<lenArr1 && ptr2<lenArr2){
        if(arr1[ptr1]<arr2[ptr2]){
            if(ansUnionArr.empty() || ansUnionArr.back()!=arr1[ptr1]){
                ansUnionArr.push_back(arr1[ptr1]);
            }
            ptr1++;
        }
        else if(arr2[ptr2]<arr1[ptr1]){
            if(ansUnionArr.empty() || ansUnionArr.back()!=arr2[ptr2]){
                ansUnionArr.push_back(arr2[ptr2]);
            }
            ptr2++;
        }

        else {
            if(ansUnionArr.empty() || ansUnionArr.back()!=arr2[ptr2]){
                ansUnionArr.push_back(arr2[ptr2]);
            }
            ptr2++;
            ptr1++;
        }
    }
    while(ptr2<lenArr2){
        if(ansUnionArr.empty() || ansUnionArr.back()!=arr2[ptr2]){
                ansUnionArr.push_back(arr2[ptr2]);
            }
            ptr2++;
    }

    while(ptr1<lenArr1){
        if(ansUnionArr.empty() || ansUnionArr.back()!=arr1[ptr1]){
                ansUnionArr.push_back(arr1[ptr1]);
            }
            ptr1++;
    }

    return ansUnionArr;

}

int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {1,2,3};

    vector<int> Union = unionArr(arr1, arr2);

    for(int ele : Union){
        cout << ele << " ";
    }
}