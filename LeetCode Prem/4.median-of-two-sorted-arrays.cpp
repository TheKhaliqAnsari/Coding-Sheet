#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
void merger(vector<int> v1, vector<int> v2, vector<int> v3){
    int i = 0, j = 0;
    while(i <= v1.size() || j <= v2.size()){
        if(v1[i] <= v2[j]){
            v2.push_back(v1[i]);
            i++;
        }else{
            v3.push_back(v2[j]);
            j++;
        }
    }
    while(i <= v1.size()){
        v3.push_back(v1[i]);
        i++;
    }
    while (j <= v2.size())
    {
        v3.push_back(v1[j]);
        j++;
    }
    return;
    
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v3;
        merger(nums1, nums2, v3);
        double ans = accumulate(v3.begin(), v3.end(), 0)/v3.size();
        return ans;
    }
};
// @lc code=end

