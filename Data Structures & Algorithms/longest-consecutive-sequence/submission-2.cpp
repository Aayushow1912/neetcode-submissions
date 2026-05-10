class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> all(nums.begin(),nums.end());
       int longe = 0;
       for(auto it: nums){
        if(!all.count( it - 1)){
            int cur = it;
            int streak = 1;
            while(all.count(cur + 1)){
                cur++;
                streak++;
            }
            longe = max(longe, streak);
        }
       }
       return longe;
    }
};
