class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int st = 0;
        int end = n - 1;
        int ht, wd, ar, maxa = INT_MIN;
        while(end > st){
          ht = min(heights[st], heights[end]);
          wd = end - st;
          ar = ht * wd;
          maxa = max(maxa, ar);
          if(heights[st] < heights[end]) st++;
          else end--;
        }
        return maxa;
    }
};
