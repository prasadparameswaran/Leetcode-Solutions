// Solution using stack
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int i = 0;
        char c;
        while((c = s[i])!='\0'){
            if (c == '(' || c == '{' || c == '[') stk.push(s[i++]);
            else{
                if (stk.empty()) return false;
                switch(c){
                    case ')':
                        if (stk.top() == '('){
                            stk.pop();
                            i++;
                        }else return false;
                        break;
                    case '}':
                        if (stk.top() == '{'){
                            stk.pop();
                            i++;
                        }else return false;
                        break;
                    case ']':
                        if (stk.top() == '['){
                            stk.pop();
                            i++;
                        }else return false;
                        break;
                }
            }
        }
        return (stk.empty());
    }
};