class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> umap;
        for(char c : t) umap[c]++;

        int l = 0, r = 0;
        int count = 0;
        int minLen = INT_MAX;
        int startIndex = 0;

        while (r < s.size()) {
            if (umap[s[r]] > 0)
                count++;
            umap[s[r]]--;

            while (count == t.size()) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    startIndex = l;
                }

                umap[s[l]]++;
                if (umap[s[l]] > 0)
                    count--;

                l++;
            }
            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};
