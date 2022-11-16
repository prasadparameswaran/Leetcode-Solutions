// Approach: Words are separated using spaces. The algorithm makes use of this along with a boolean variable to distinguish different words. Once the word is read completely it's pushed into a vector. The vector is traversed in reverse order to create the output (stack can also be used in place of a vector). Time can be further reduced by using 2 pointer method 

class Solution {
    vector<string> words;
public:
    string reverseWords(string s) {
        int i = 0; 
        bool inWord = false; // to indicate if we are inside the word
        string word = "";

        while(i < s.length()){
            if(isspace(s[i])){
                if(inWord){
                    inWord = false;
                    words.push_back(word);
                    word = "";
                }
            }else{
                if(!inWord) inWord = true;
                word += s[i];
                if( i == s.length()-1) words.push_back(word);
            }
            i++;
        }

        for(i = words.size()-1, word = ""; i>=0 ; i--){
            word += words[i];
            if (i != 0) word += " "; 
        } 
        return word;
    }
};