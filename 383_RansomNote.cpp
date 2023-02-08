// Hash map based solution T(n) = S(n) = O(n) 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransomMap, magazineMap;
        int i;
        for(i = 0; i < ransomNote.size(); i++) ransomMap[ransomNote[i]]++;
        for(i = 0; i < magazine.size(); i++) magazineMap[magazine[i]]++;
        for(i = 0; i < ransomNote.size(); i++) {
            if(magazineMap[ransomNote[i]] < ransomMap[ransomNote[i]]) return false;
        }
        return true;
    }
};