//Hash map based solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> H;
        int majority = nums.size()/2;
        for(int i = 0 ; i < nums.size(); i++){
            H[nums[i]]++;
            if(H[nums[i]] > majority) return nums[i];
        }
        return 0;
    }
};