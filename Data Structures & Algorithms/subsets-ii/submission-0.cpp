class Solution {
public:
    void find_dp(vector<int>& nums,vector<int>& ans,vector<vector<int>>& allsub, int i ){
         int n = nums.size();
         
         if(i == n){
            allsub.push_back({ans});
            return;
         }
         ans.push_back(nums[i]);
         find_dp(nums,ans,allsub, i+ 1);
         ans.pop_back();

         int idx = i + 1;
         while(idx < n && nums[idx] == nums[i]){
            idx++;
         }
         find_dp(nums,ans,allsub,idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsub;
        vector<int> ans;
        int i = 0;
        find_dp(nums,ans,allsub,i);
        return allsub;
    }
};
