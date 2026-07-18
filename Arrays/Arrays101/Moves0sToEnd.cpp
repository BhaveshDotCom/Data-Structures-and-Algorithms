#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void move0s(vector<int>& arr){

    vector<int> temp;
    
    int arrLen = arr.size();
 
    for(int i=0; i<arrLen; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int tempLen = temp.size();
    for(int i=0; i<tempLen; i++){
        arr[i] = temp[i];
    }

    for(int i=tempLen; i<arrLen; i++){
        arr[i] = 0;
    }
}

int main(){
    vector<int> arr = {1,2,0,0,3,4,4,0,0,5};
    cout << "Before" << endl;
    for(int num : arr){
        cout << num << " ";
    }

    move0s(arr);
    cout << "After" << endl;
    for(int num : arr){
        cout << num << " ";
    }
}
