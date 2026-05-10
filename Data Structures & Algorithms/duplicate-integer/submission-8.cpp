class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for(auto it: nums){
            uset.insert(it);
        }
       if(uset.size() == nums.size()) return false;
       else return true;
    }
};