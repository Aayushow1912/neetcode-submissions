class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int curr = 1;
        int lng = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]) continue;
            else if(nums[i] == nums[i - 1] + 1){
                curr++;       
            }
            else{
                lng = max(lng, curr);
                curr = 1;
            }
        }
        lng = max(lng, curr);
        return lng;
    }
};
