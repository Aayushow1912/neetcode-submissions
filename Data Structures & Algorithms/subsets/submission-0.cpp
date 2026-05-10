class Solution {
public:
    void all(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &allsub){
         if(i == nums.size()){
            allsub.push_back({ans});
            return;
         }
         ans.push_back(nums[i]);
         all(nums,ans,i+1,allsub);
         ans.pop_back();
         all(nums,ans,i + 1,allsub);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allsub;
        int i = 0;
        all(nums,ans,i,allsub);
        return allsub;
    }
};