#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[] = {1,2,2,2,3,3,3,3,3,4,4,5};
    int hash[6] = {0};

    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size;i++){
        hash[arr[i]]+=1;
    }

    int target;
    cin >> target;
    cout << "Frequrncy of " << target << " is " << hash[target] << endl;

    return 0;
}

