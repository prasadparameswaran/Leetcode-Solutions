class Solution {
public:
    int maximum69Number (int num) {
        int ndigits = 0; int div = num;
        // find number of digits in number
        for( ; div >0; ndigits++){
            ndigits++;
            div /=pow(10,ndigits);
        }
        //find the first 6 from left and flip it to 9
        for(; ndigits > 0 ; ndigits--){
            if((num%int(pow(10,ndigits)))/int((pow(10,ndigits-1))) == 6)
                return num + (3*pow(10,ndigits-1));
        }
        // return input if all digits are 9s
        return num;
    }
};