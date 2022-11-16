/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
// This problem is a variant implementation of binary search
class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n ,g;
        int mid = (long(low)+high)/2;
        while((g=guess(mid))){
            if(g==-1) high = mid -1; 
            else if(g==1) low = mid + 1;
            mid = (long(low)+high)/2;
        }
        return mid;
    }
};