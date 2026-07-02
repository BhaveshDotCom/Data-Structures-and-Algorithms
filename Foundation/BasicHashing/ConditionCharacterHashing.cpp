#include<iostream>
using namespace std;

// CONDITION: only lowercase letters are present

int main(){

    string str; //aabbccdddd
    cout << "Enter String: ";
    cin >> str;

    // precomputing
    int hashArr[256] = {0};
    for(int i=0; i<str.size(); i++){
        hashArr[str[i] - 'a']++;
    }

    // fetching
    char userChar;
    cout << "Enter Character to find: ";
    cin >> userChar;
    cout << hashArr[userChar - 'a'] << endl;
    
    return 0;
}