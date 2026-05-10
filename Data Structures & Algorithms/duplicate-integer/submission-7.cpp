class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> us;
        for(int i= 0; i<n; i++){
            us.insert(nums[i]);
        }
        if(us.size() != n){
            return true;
        }
        else{
            return false;
        }
    }
};