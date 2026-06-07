class Solution {
public:
    
    long long issq(int n){
        long long ans = 0;
        int last;

        while(n > 0){
            last = n % 10;
            ans += last*last;
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        vector<int> v;
        
        while(n != 1){
            for(int i = 0; i < v.size(); i++){
            if(v[i] == n){
                return false;
                
            }
        }
         v.push_back(n);
         n = issq(n);
    }

        return true;
    }
};
