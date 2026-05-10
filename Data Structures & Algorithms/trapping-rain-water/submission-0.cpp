class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> lmx(n, 0);
        vector<int> rmx(n, 0);
        lmx[0] = height[0];
        rmx[n - 1] = height[n - 1];
        for(int i = 1; i<n; i++){
            lmx[i] = max(lmx[i - 1], height[i]);
        }
        for(int i = n -2; i>= 0; i--){
            rmx[i] = max(rmx[i + 1], height[i]);
        }
        for(int i = 0; i < n; i++){
          ans += min(lmx[i],rmx[i]) - height[i];
        }
        return ans;
    }
};
