#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++){
            int it = target - nums[i];
            if(umap.find(it) != umap.end()){
                return {umap[it], i};
            }
            umap[nums[i]] = i;

        }
        return {};
    }
};
// @lc code=end

