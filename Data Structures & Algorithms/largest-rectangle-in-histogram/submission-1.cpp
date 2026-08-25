class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        int car, mxar = 0;

        vector<int> lefts(n), rights(n);
        stack<int> s;

        // Find nearest smaller on RIGHT
        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            rights[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        // Empty stack
        while(!s.empty()) {
            s.pop();
        }

        // Find nearest smaller on LEFT
        for(int i = 0; i < n; i++) {
            while(!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }

            lefts[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        // Calculate maximum area
        for(int i = 0; i < n; i++) {
            int width = rights[i] - lefts[i] - 1;
            car = heights[i] * width;

            mxar = max(mxar, car);
        }

        return mxar;
    }
};