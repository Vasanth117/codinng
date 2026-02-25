#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        
        string vowels = "";
        
        // Step 1: Collect all vowels
        for(char c : s) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                vowels += c;
            }
        }
        
        // Step 2: Reverse vowels
        reverse(vowels.begin(), vowels.end());
        
        // Step 3: Put vowels back
        int j = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                s[i] = vowels[j++];
            }
        }
        
        return s;
    }
};

int main() {
    Solution sol;
    cout << sol.reverseVowels("hello") << endl;
    return 0;
}