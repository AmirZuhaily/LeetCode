class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int,int> maps;

        for(int num:nums2){
            while( !stk.empty() && stk.top() < num){
                maps[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }

        while( !stk.empty()){
            maps[stk.top()] = -1;
            stk.pop();
        }

        vector<int> result;
        for(int num:nums1){
            result.push_back(maps[num]);
        }
        return result;
    }
};