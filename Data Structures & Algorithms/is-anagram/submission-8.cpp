class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> umap1, umap2;
        for(char ch : s){
            umap1[ch]++;
        }
        for(char ch : t){
            umap2[ch]++;
        }
        return umap1 == umap2;
    }
};
