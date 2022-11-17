// Solved using 2 pointers, first k positions have unique elements
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,num = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != num){
                num = nums[i];
                nums[k++] = nums[i]; 
            }      
        }
        return k;
    }
};