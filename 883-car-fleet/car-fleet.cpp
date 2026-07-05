#include <utility>
#include <stack>
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> fleet;
        
        //insert pair into stack
        for(int i = 0 ; i < position.size() ; i++){
            fleet.emplace_back(position[i] , speed[i]);
        }
        
        sort(fleet.begin() , fleet.end());
        vector<double> stack;

        for(int j = fleet.size() - 1 ; j >= 0 ; j--){
            int p = fleet[j].first;
            int s = fleet[j].second;

            double time = (double)(target - p) /s;
            stack.push_back(time);

            if(stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]){
                stack.pop_back();
            }
        }

        return stack.size();

    }
};