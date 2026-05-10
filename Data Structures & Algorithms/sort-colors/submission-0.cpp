class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for(auto it: nums){
            if(it == 0){
                count_0++;
            }
            else if(it == 1){
                count_1++;
            }
            else{
                count_2++;
            }
        }

         int idx = 0;
        while (count_0--) nums[idx++] = 0;
        while (count_1--) nums[idx++] = 1;
        while (count_2--) nums[idx++] = 2;
    }
};