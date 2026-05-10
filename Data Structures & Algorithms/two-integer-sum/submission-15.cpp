class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> umap;
      for(int i = 0; i < nums.size(); i++){
        int dif = target - nums[i];
        if(umap.count(dif)) return {umap[dif],i};
        umap[nums[i]] = i;
      }
      return {};
    }
};
