//Logic: anagrams after sorting will be the same string 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> m;
        vector<vector<string>> out;
        string str,sortedStr;
         
        for(int i = 0; i < strs.size(); i++ ){     
            str = strs[i];
            sortedStr = str; 
            sort(sortedStr.begin(),sortedStr.end());
            m[sortedStr].push_back(str);
        }
        
        for(auto j = m.begin(); j !=m.end(); j++) {
            out.push_back(j->second);
        }
        
        return out;    
    }
};