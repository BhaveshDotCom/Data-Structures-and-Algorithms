#include <iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> SortedUnion(vector<int>& arr1, vector<int>& arr2){

    set<int> tempSet;
    
    for(int i=0; i<arr1.size(); i++){
        tempSet.insert(arr1[i]);
    }
    for(int i=0; i<arr2.size(); i++){
        tempSet.insert(arr2[i]);
    }

    vector<int> unionArr(tempSet.begin(), tempSet.end());
    return unionArr;
}

int main(){
    vector<int> arr1 = {1,2,2,3,4,5,5,5};
    vector<int> arr2 = {1,3,4,6,7,4,5,9};
    vector<int> go = SortedUnion(arr1, arr2);

    for(int num : go){
        cout << num << " ";
    }
}