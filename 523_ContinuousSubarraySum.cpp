class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i,r,sum = 0;
        unordered_map<int,int> m;
        m[0] = -1;
        for(i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            r = sum % k;
            if(m.count(r)>0) {if(i-m[r] > 1) return true;}
            else m[r] = i;
        }
        return false;
    }
};