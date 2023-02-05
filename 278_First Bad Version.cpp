// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// the problem is a variation of binary searc. straight forward solution
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high =n;
        while(low < high){
            int mid = (long(low)+high)/2;
            if(isBadVersion(mid)) high = mid;
            else low = mid+1;
        } 
        return high;
    }
};