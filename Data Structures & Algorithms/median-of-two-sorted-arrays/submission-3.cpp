class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> temp;
       int n = nums1.size();
       int m = nums2.size();
       for(int i = 0; i < n; i++){
        temp.push_back(nums1[i]);
       }
       for(int i = 0; i < m; i++){
        temp.push_back(nums2[i]);
       }
       double ans;
       sort(temp.begin(),temp.end());
       int sz = temp.size();
       if(sz % 2 == 0){
        ans = (temp[sz/2 - 1] + temp[sz/2])/2.0;
       }
       else{ans = temp[sz/2];}
       return ans;
    }
};
