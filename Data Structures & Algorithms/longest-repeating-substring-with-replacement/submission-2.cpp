class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int left = 0;
        int max_freq = 0;
        int max_window = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;
            max_freq = max(max_freq, freq[s[right]]);

            int window_len = right - left + 1;

            if (window_len - max_freq > k) {
                freq[s[left]]--;
                left++;
            }
            
            window_len = right - left + 1;

            max_window = max(max_window, window_len);
        }

        return max_window;
    }
};
