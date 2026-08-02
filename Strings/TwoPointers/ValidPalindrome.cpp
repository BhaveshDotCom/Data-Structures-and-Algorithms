#include<bits/stdc++.h>
using namespace std;

// TC: O(N); SC: O(N)
bool isPalindromeM1(string s) {
    bool palindrome = true;
    int left = 0, right = s.length()-1;
    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        if(tolower(s[left])!=tolower(s[right])){
            palindrome = false;
            break;
        }
        left++;
        right--;
    }
    return palindrome;
}

// TC: O(N); SC: O(1)
bool isPalindromeM2(string s) {
    bool palindrome = true;
    int left = 0, right = s.length()-1;
    while(left<right){
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        if(tolower(s[left])!=tolower(s[right])){
            palindrome = false;
            break;
        }
        left++;
        right--;
    }
    return palindrome;
}


int main(){
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindromeM2(s) << endl;
}