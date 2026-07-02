#include <unordered_map>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int , int> freq;

        for(int i : nums1){
            freq[i]++;
        }

        vector<int> sol;

        for(int i : nums2){
            if(freq[i] > 0){
                sol.push_back(i);
                freq[i]--;
            }
        }

        return sol;
    }
};