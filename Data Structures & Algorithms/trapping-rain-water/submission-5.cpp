class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int l = 0, r = n - 1;
        int lmx = 0, rmx = 0;
        while(r > l){
            lmx = max(lmx, height[l]);
            rmx = max(rmx, height[r]);
            if(lmx < rmx){
                ans += (lmx - height[l]);
                l++;
            }
            else{
                ans += (rmx - height[r]);
                r--;
            }
        }
        return ans;
    }
};
