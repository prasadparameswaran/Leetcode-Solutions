class Solution {
public:
    string removeDuplicates(string s) {
        //solution using stack
        string out = "";
        out.push_back(s[0]);
        for(int i = 1; i < s.length(); i++){
            if(s[i] == out.back()) out.pop_back();
            else out.push_back(s[i]);
        }
        return out;
    }
};