class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> res;
      for(int i = 1; i <= 2; i++) res.insert(res.end(), nums.begin(), nums.end());
      return res;  
    }
};