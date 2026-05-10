class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
if(nums.size() == 0 || nums.size() < 3) return {};

sort(nums.begin(), nums.end());

set<vector<int>> st;

for(int i = 0; i < nums.size() - 2; i++){
    int l = i + 1;
    int r = nums.size() - 1;
    while(r > l){
     int sum = (nums[i] + nums[l] + nums[r]);

     if(sum == 0){
        st.insert({nums[i],nums[l],nums[r]});
        l++; r--;
     }
     else if(sum < 0){
        l++;
     }
     else{
        r--;
     }
    }
 }
 return vector<vector<int>>(st.begin(), st.end());;   
    }
};
