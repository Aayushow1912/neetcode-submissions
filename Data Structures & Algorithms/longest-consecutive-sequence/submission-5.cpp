class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> ans(nums.begin(), nums.end());
       int longest = 0;

       for(auto it: ans){
        if(ans.find(it - 1) == ans.end()){
            int len = 1;
            while(ans.find(it + len) != ans.end()){
                len++;
            }
            longest = max(longest, len);
        }
       }
       return longest;
    }
};
