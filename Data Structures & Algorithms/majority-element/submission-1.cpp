class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = 0;
        int count  = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                cand = nums[i];
            }
            count += (nums[i] == cand) ? 1 : -1;
        }
       return cand;
    }
};