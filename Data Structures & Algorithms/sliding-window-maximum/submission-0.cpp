class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i <= n - k; i++){
            int max_ele = *max_element(nums.begin() + i, nums.begin() + i + k);
            ans.push_back(max_ele);
        }
        return ans;
    }
};
