class Solution {
public:
    int characterReplacement(string s, int k) {
    int i = 0, j = 0;
    int mxfrq = 0;
    int ans = 0;
    unordered_map<char,int> mp;

    while(j < s.length()){
        mp[s[j]]++;

        mxfrq = max(mxfrq, mp[s[j]]);
        while((j - i + 1) - mxfrq > k){
            mp[s[i]]--;
            i++;
        }

        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
    }
};
