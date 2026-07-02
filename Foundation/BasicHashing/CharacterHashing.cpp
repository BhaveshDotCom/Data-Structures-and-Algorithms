#include<iostream>
using namespace std;

int main(){

    string str; //aabbccdddd
    cout << "Enter String: ";
    cin >> str;

    // precomputing
    int hashArr[256] = {0};
    for(int i=0; i<str.size(); i++){
        hashArr[str[i]]++;
    }

    // fetching
    char userChar;
    cout << "Enter Character to find: ";
    cin >> userChar;
    cout << hashArr[userChar] << endl;
    return 0;
}