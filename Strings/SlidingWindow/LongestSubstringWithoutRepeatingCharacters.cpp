#include<bits/stdc++.h>
using namespace std;

/* 
int lengthOfLongestSubstring(string s){
    int n = s.size();
    int longestLen = 0;
    unordered_map<char, int> freq;
    int left = 0, right = 0;
    while(right < n){
        char ch = s[right];

        freq[ch]++;
        while(freq.count(ch) && freq[ch]>1){
            freq[s[left]]--;
            left++;
        }

        longestLen = max(longestLen, right-left+1); 
        right++;
    }
    return longestLen;
}
*/

/* int lengthOfLongestSubstring(string s){
    int n = s.size();
    int longestLen = 0;
    int idxArr[256];
    fill(idxArr, idxArr+256, -1);
    int left = 0;
    for(int right=0; right<n; right++){
        if(idxArr[s[right]] != -1 && idxArr[s[right]] >= left){
            left = idxArr[s[right]]+1;
        }
        idxArr[s[right]] = right;
        longestLen = max(longestLen, right-left+1);
    }
    return longestLen;
} */

int lengthOfLongestSubstring(string s){
    int n = s.size();
    int longestLen = 0;
    unordered_map<char, int> idxMap;
    int left = 0, right =0;
    while(right < n){

        if(idxMap.count(s[right])){
            left = max(left, idxMap[s[right]]+1);
        }

        idxMap[s[right]] = right;
        longestLen = max(longestLen, right-left+1);
        right++;
    }

    return longestLen;
}

int main(){
    cout << lengthOfLongestSubstring("pwwkew") << endl;
}