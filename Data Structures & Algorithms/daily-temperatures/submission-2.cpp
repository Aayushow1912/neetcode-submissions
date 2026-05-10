class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> help;
        vector<int> ans(n,0);
        for(int i  = n - 1; i >= 0;i--){
            while(!help.empty() && temperatures[i] >= temperatures[help.top()]){
                help.pop();
            }

           if(!help.empty()){
            ans[i] = help.top() - i;
           }

           help.push(i);
        }
        return ans;
    }
};
