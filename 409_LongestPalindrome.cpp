// Hash map solution, add all even occurances for odd add odd-1, finaly and 1 for the longest odd string. T(n) = O(n); S(n) = O(n) 

class Solution {
public:
    int longestPalindrome(string s) {
        int length = 0; bool odd = false;
        unordered_map<char,int> H;
        for(int i = 0; i < s.length(); i++ ){
            H[s[i]]++;
        }
        
        for(auto it = H.begin(); it != H.end(); it ++){
            if((it->second%2) == 0) length += it->second;
            else{
                length += it->second - 1;
                odd = true;
            }
        }
        if(odd) length++;
        return length;
    }
};