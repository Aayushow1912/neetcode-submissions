class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            unordered_set<char> uset;
            for(int j = i; j < n; j++){
                if(uset.find(s[j]) != uset.end()){
                    break;
                }
                uset.insert(s[j]);
            }
            ans = max(ans, (int)uset.size());
        }
        return ans;
    }
};
