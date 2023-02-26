// straight forwared binary adition logic. Strings are made equal lengt before binary addition 
class Solution {
public:
    string addBinary(string a, string b) {

        if(a.size() > b.size()){
            while(a.size() != b.size()){
                b = '0' + b;
            }
        } else if(a.size() < b.size()){
            while(a.size() != b.size()){
                a = '0' + a;
            }
        }

        int i = a.size()-1;
        int carry = 0;
        int bitAdd;
        string out = "";
        while( i >= 0){
            bitAdd = carry + (a[i]-'0') + (b[i] - '0');
            
            if(bitAdd == 0) {out = '0' + out; carry = 0;}
            else if(bitAdd ==1) {out = '1' + out; carry =0;}
            else if(bitAdd == 2) {out = '0' + out; carry = 1;}
            else if(bitAdd == 3){out = '1' + out;carry = 1;}
            i--;
        }
        
        if(carry) out = '1' + out;
        return out;

    }
};