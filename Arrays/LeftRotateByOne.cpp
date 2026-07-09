#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int>& arr){

    if(arr.empty()) return;

    int temp = arr[0];
    for(int ptr=1; ptr<(int)arr.size(); ptr++){
        arr[ptr-1] = arr[ptr];
    }
    arr[arr.size()-1] = temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    leftRotateByOne(arr);
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}