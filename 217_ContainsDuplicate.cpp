// Hash map solution T(n) = S(n) = O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> H;
        for(int i = 0; i < nums.size(); i++){
            if(H[nums[i]] == true) return true;
            H[nums[i]] = true;
        }
        return false;
    }
};