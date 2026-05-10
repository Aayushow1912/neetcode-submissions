class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n = heights.size();
       int max_amount = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int width = (j - i);
                int height = min(heights[i], heights[j]);
                int area = width * height;
                max_amount = max(max_amount, area);
            }
        }
        return max_amount; 
    }
};
