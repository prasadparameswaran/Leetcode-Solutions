//Hash table approach
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> out,map;
        vector<int> maps(nums.size()+1,0);
        maps[0] = 3;
        for(int i=0 ; i<nums.size() ; i++){
            maps[nums[i]]++;
        }
        out.push_back(find(maps.begin(),maps.end(),2)-maps.begin());
        out.push_back(find(maps.begin(),maps.end(),0)-maps.begin());
        return out;
    }
};