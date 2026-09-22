class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());

        int ans = -1;

        while(end >= start) {

            int curr_time = 0;

            int mid = start + (end - start) / 2;

            for(int i = 0; i < piles.size(); i++) {
                curr_time += (piles[i] + mid - 1) / mid;
            }

            if(curr_time <= h) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};