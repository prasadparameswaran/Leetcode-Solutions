class Solution {
public:
    string makeGood(string s) {
        // solution using recursion; better solution is using stack
        if (s.size() == 1 ) return s;
        int diff = abs('A'-'a');
        if (s.length() == 2){
            if (abs(s[0]-s[1]) == diff) return "";
            else return s;
        } 
        for (int i = 0; i < s.length()-1; i++){
            if (abs(s[i]-s[i+1]) == diff){
                s = s.substr(0,i) + s.substr(i+2);
                s = makeGood(s);
                return s;     
            }
        }
        return s;
    }
};