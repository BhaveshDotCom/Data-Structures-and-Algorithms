#include <iostream>
#include <set>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr){
    set<int> tempSet;

    for(auto num : arr){
        tempSet.insert(num);
    }

    int index=0;
    for(auto it : tempSet){
        arr[index] = it;
        index++;
    }

    return index;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,3,4,5,5,5,5,9};
    cout << removeDuplicates(arr) << endl;
}