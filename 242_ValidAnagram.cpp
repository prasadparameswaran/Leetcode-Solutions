//approach : anagrams ahave same sorted order, time = O(nlogn), space = O(1)
// Alternative : hashmaps time = O(n); space = O(1) 
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};