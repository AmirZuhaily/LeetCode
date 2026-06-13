#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*
        quasi similar problem to longest common prefix but instead of continous, just need to find similar number
        can be solved using hashset
        */ 
        unordered_set <int> seen_number(nums1.begin() , nums1.end());
        vector<int> result;

        for(int numbers : nums2){
            if(seen_number.count(numbers)){
                result.push_back(numbers);
                seen_number.erase(numbers);
            }
        }
        return result;
    }
};