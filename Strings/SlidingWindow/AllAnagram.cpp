#include<bits/stdc++.h>
using namespace std;

// Brute
vector<int> findAnagramsBrute(string s, string p) {
    vector<int> res;
    int n = s.size(), k=p.size();
    vector<int> charCount(26);
    for(char ch : p){
        charCount[ch-'a']++;
    }
    for(int i=0; i<=n-k; i++){ 
        vector<int> subStr(26);
        for(int j=i; j<i+k; j++){
            subStr[s[j]-'a']++;
        }
        if(subStr == charCount){
            res.push_back(i);
        }
    }
    return res;
}

// Better (2 Map + Sliding Window)
vector<int> findAnagramsBetter(string s, string p){
    vector<int> res;
    int n = s.size(), k = p.size();
    int count = k;
    unordered_map<char, int> sMap, pMap;

    for(char ch : p){
        pMap[ch]++;
    }

    int left = 0, right = 0;
    while(right < n){
        char ch = s[right];
        sMap[ch]++;
        if(pMap.count(ch) && sMap[ch]<=pMap[ch]){
            count--;
        }

        if(right-left+1 > k){
            char leftCh = s[left];
            if(pMap.count(leftCh) && sMap[leftCh] <= pMap[leftCh]){
                count++;
            }
            sMap[leftCh]--;
            left++;
        }

        if(count == 0){
            res.push_back(left);
        }
        
        right++;
    }
    return res;
}


int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> anagramArr = findAnagramsBetter(s,p);
    for(int idx : anagramArr){
        cout << idx << " ";
    }
}