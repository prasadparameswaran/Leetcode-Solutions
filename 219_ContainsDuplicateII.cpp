// Solved by hashing 
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j;
        unordered_map<int,int> m;
        for (i = 0; i < nums.size(); i++){
            if(m.count(nums[i])>0){ 
                if(abs(i-m[nums[i]]) <= k){    
                    return true;
                }else{
                    m[nums[i]] = i;
                }
            }else{
                m[nums[i]] = i;
            }
        }
        return false;
    }
};