class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto it : nums){
          umap[it]++;
        }
        for(auto it: umap){
          if(it.second >= 2){
            return it.first;
          }
        }
      return 1;
    }
};
