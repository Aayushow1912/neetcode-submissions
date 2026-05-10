class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto itr:mp)
        {
            pq.push({itr.second,itr.first});
        }
        vector<int>ans;
        while(k--)
        {
            pair<int,int>te=pq.top();
            pq.pop();
            ans.push_back(te.second);
        }
        return ans;
        
    }
};
