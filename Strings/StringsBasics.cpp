#include<iostream>
#include<string>
#include <cstring>
#include <limits>
#include <algorithm>
#include<cctype>
using namespace  std;

void characterArray101(){
    // character Array
    // declaration & initialization
    char str[] = {'a', 'b', 'c', '\0'}; 
    cout << str << endl;

    // length
    cout << strlen(str) << endl;
    cout << sizeof(str)-1 << endl;
    // char = 1 byte

    // Input
    // char inputStr[10];
    // cout << "Enter char array: ";
    // cin >> inputStr; // ignores chars after whitespace
    // cout << inputStr << endl; 

    // cin.getline(str, len, delim)
    char getlineStr[18];
    cout << "Enter string: ";
    cin.getline(getlineStr, 18);

    cout << getlineStr[4] << endl;
    
    for(char ch : getlineStr){
        cout << ch << " ";
    }
    cout << endl;
}

void strings101(){
    char ch = 'B';
    cout << (char)tolower(ch) << endl;

    // string
    string strA;
    strA = "binary";
    string strB = "Search";
    transform(strA.begin(), strA.end(), strA.begin(), ::toupper);
    cout << strA << endl;

    // access
    cout << strA[3] << endl;

    // length
    cout << strA.length() << endl;

    // concat
    cout << strA +" "+ strB << endl;

    // equals
    cout << (strA == strB) << endl;
    cout << (strA == "Binary") << endl;

    // relation
    cout << (strA < strB) << endl;

    // input
    string strC;
    cout << "Enter a string: ";
    cin >> strC; // ignores chars after whitespace
    cout << strC << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string strD;
    cout << "Enter a string: ";
    getline(cin, strD); 
    cout << strD << endl;

    for(int i=0; i<strD.length(); i++){
        cout << strD[i] << ' ';
    }
    cout << endl;

    for(char ch : strD){
        cout << ch << ' ';
    }
    cout << endl;

    reverse(strD.begin(), strD.end());
    cout << strD << endl;


}

int main(){

    // characterArray101();
    strings101();

}

/*
    transform(strA.begin(), strA.end(), strA.begin(), ::toupper);
    Index:  0 1 2 3 4
    Value:  A B C D E
    Read :  ^
    Write:    ^
*/