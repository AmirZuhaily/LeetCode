class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //O(logn) time
        //O(1) space
        sort(nums.begin() , nums.end());
        int left = 0;
        int right = 1;
        while(right < nums.size()){
            if(nums[left] == nums[right]){
                return true;
            }
            left++;
            right++;
        }
        return false;
    }
};