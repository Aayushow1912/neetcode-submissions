class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lp = 0, rp = heights.size() - 1;
        int wd, ht;
        long long max_area = INT_MIN, curr_area;
        while(lp < rp){
           wd = rp - lp;
           ht = min(heights[lp],heights[rp]);
           curr_area = wd * ht;

           max_area = max(max_area, curr_area);

           heights[lp] < heights[rp]?lp++:rp--;
        }
        return max_area;
    }
};
