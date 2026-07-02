#include<iostream>
#include<map>
using namespace std;

int main(){

    // Creating a map
    map<int, int> hashMap;
    int arr[] = {1,2,3,3,3,4,4,5,14,15,15}; 

    // Precompute / Hashing
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0; i<size; i++){
        hashMap[arr[i]]++;
    }

    // fetching
    int target;
    cout << "Find: ";
    cin >> target;
    cout << "Frequency: " << hashMap[target] << endl;
    cout << "Frequency: " << hashMap.at(target) << endl;

    cout << hashMap.size() << endl; 
    
    return 0; 
}