class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i;
        string w1,w2;
        w1=w2="";
        for(i = 0; i<word1.size();i++){
            w1 += word1[i];
        }

        for(i = 0; i<word2.size();i++){
            w2 += word2[i];
        }

        if(w1.compare(w2) == 0) return true;
        return false;
    }
};