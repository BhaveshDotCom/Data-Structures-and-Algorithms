#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1, vector<int> arr2){
    vector<int> intsArr;
    vector<int> visitedArr(arr2.size(),0);
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]==arr2[j] && visitedArr[j]==0){
                intsArr.push_back(arr1[i]);
                visitedArr[j]=1;
                break;
            }
            else if(arr1[i]<arr2[j]) break;
        }
    }
    return intsArr;
} 

int main(){
    vector<int> arr1 = {1,3,5,6,7,7};
    vector<int> arr2 = {1,1,2,3,5};
    
    for(int ele : intersection(arr1, arr2)){
        cout << ele << " ";
    }
}
// TC = n1.n2
// SC = O(n2)