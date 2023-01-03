class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        char c;
        string word;
        // extract alphanumeric part of string 
        while ((c = s[i]) != '\0'){
            if(int(c) >= int('a') && int(c) <= int('z') || int(c) >= int('0') && int(c) <= int('9')) word += c;
            if(int(c) >= int('A') && int(c) <= int('Z')) word += char(c + 'a' - 'A');
            i++;
        }
        // check if palindrome
        for (i = 0; i < word.size()/2; i++){
            if(word[i] != word[word.size() - i - 1]) return false;
        }
        
        return true;
    }
};