class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> umap1, umap2;
        for(int i = 0; i < s.length(); i++){
            umap1[s[i]]++;
            umap2[t[i]]++;
        }
        return umap1 == umap2;
    }
};
