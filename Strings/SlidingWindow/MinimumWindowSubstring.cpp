#include<bits/stdc++.h>
using namespace std;

/* string minWindow(string s, string t) {  
    int n = s.size(), k = t.size();
    
    int minLen = INT_MAX;
    int subStringIdx = -1;

    for(int i=0; i<n-k; i++){
        int freq[256] = {0};
        for(char ch : t){
            freq[ch]++;
        }
        int count = k;
        for(int j=i; j<n; j++){

            if(freq[s[j]]>0){
                count--;
            }
            freq[s[j]]--;

            if(count == 0){
                if(minLen > j-i+1){
                    minLen = j-i+1;
                    subStringIdx = i;
                    break;
                };
            }
        }
    }
    if (subStringIdx == -1) return "";
    return s.substr(subStringIdx, minLen);
} */

string minWindow(string s, string t) {  
    int n = s.size(), k = t.size();
        
    int minLen = INT_MAX;
    int subStringIdx = -1;
    int freq[256] = {0};
    int count = k;

    for(char ch : t){
        freq[ch]++;
    }

    int left = 0, right = 0;
    while(right < n){


        if(freq[s[right]]>0){
            count--;
        }
        freq[s[right]]--;

        while(count == 0){
            if(right - left +1 < minLen){
                subStringIdx = left;
                minLen = right - left +1;
            }

            freq[s[left]]++;
            if(freq[s[left]]>0){
                count++;
            }

            left++;
        }
        right ++;
    }

    if (subStringIdx == -1) return "";
    return s.substr(subStringIdx, minLen);
}

int main(){
    string s = "ADOBECODEBANC", t = "ABC";
    cout << minWindow(s,t) << endl;

}