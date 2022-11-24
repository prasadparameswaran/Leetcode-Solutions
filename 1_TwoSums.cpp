// solution uaing hash map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> out;
        for (int i = 0; i < nums.size(); i++) {
            auto it = m.find(target - nums[i]);
            if (it != m.end()) {
                out.push_back(it->second);
                out.push_back(i);
                return out;
            }
            else m[nums[i]] = i;
        }
        return out;
    }    
};