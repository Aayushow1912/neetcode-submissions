class Solution {
public:
    string minWindow(string s, string t) {
    int start = 0;
    int i = 0, j = 0;
    int mnwin = INT_MAX, count = 0;
    unordered_map<char, int> mp;

    for (auto it : t)
    {
        mp[it]++;
    }
    count = mp.size();
    while (j < s.length())
    {

        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;
        if (mp[s[j]] == 0)
        {
            count--;
        }
    }
    while (count == 0)
    {
        if(j - i + 1 < mnwin){
        mnwin = min(mnwin, (j - i + 1));
        start = i;
        }
        if(mp.find(s[i]) != mp.end()){
            if(mp[s[i]] == 0) count++;
             mp[s[i]]++;
        }
        i++;
    }
    j++;
}
    if(mnwin == INT_MAX) return "";
    return s.substr(start, mnwin);
    }
};
