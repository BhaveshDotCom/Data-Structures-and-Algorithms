#include<bits/stdc++.h> 
using namespace std;

// Brute Force
/* bool check(unordered_map<char, int> freq, unordered_map<char, int> s1Map){
    for(const auto& [ch, count] : s1Map){
        if(freq[ch] != count) return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int m=s1.size(), n=s2.size();

    if(m>n) return false;

    unordered_map<char, int> s1Map;
    for(char ch : s1){
        s1Map[ch]++;
    }

    for(int i=0; i<=n-m; i++){
        unordered_map<char, int> freq;
        for(int j=i; j<i+m ;j++){
            freq[s2[j]]++;
        }
        if(check(freq, s1Map)){
            return true;
        }
    }
    return false;
}
*/
/* 
// Better Sliding Window + 2 Array
bool checkInclusion(string s1, string s2) {
    int m=s1.size(), n=s2.size();
    char s1Char[26] = {0}, s2Char[26] = {0};

    for(char ch : s1){
        s1Char[ch-'a']++;
    }

    int left=0;
    for(int right=0; right<n; right++){
        s2Char[s2[right]-'a']++;

        if(right-left+1 > m){
            s2Char[s2[left]-'a']--;
            left++;
        }

        if(right-left+1 == m){
            bool isMatch = true;
            for(int i=0; i<26;i++){
                if(s1Char[i] != s2Char[i]){
                    isMatch = false;
                    break;
                }
            }
            if(isMatch) return true;
        }
    }
    return false;
}
 */

// Optimal Sliding Window + 1 Array
bool checkInclusion(string s1, string s2) {
    int m=s1.size(), n=s2.size();
    int freq[26] = {0};

    for(char ch : s1){
        freq[ch-'a']++;
    }

    int left=0, count = m ;
    for(int right=0; right<n; right++){
        char ch = s2[right];
        if(freq[ch -'a']>0){
            count--;
        }
        freq[ch-'a']--;

        if(right-left+1 > m){
            char leftCh = s2[left];
            if(freq[leftCh - 'a']>=0){
                count++;
            }
            freq[leftCh- 'a']++;
            left++;
        }
        if(count == 0){
            return true;
        }
    }
    return false;
}


int main(){
    string s1 = "ab", s2 = "cdbasd";
    cout << boolalpha << checkInclusion(s1,s2) << endl;
}