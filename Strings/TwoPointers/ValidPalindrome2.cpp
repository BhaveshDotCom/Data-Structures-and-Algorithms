#include<bits/stdc++.h>
using namespace std;

class Palindrome {
private:
    bool isPalindrome(const string &s, int lptr, int rptr){
        while(lptr<rptr){

            if(s[lptr]!=s[rptr]) return false;
            lptr++;
            rptr--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int lptr = 0, rptr = s.length()-1;
        while(lptr < rptr){
            if(s[lptr]==s[rptr]){
                lptr++;
                rptr--;
            }
            else{
                if(isPalindrome(s, lptr+1, rptr)){
                    return true;
                }
                else if(isPalindrome(s, lptr, rptr-1)){
                    return true;
                }
                else return false;
            }
            
        }
        return true;
    }
};

int main(){
    Palindrome P;
    cout << P.validPalindrome("asccba") << endl;
}