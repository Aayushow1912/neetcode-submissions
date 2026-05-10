class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = *max_element(piles.begin(),piles.end());
        long long ans = 0;
        while(end >= start){
            int mid = start + (end - start)/2;
            ans = 0;

            for(int i = 0; i < piles.size(); i++){
                  ans += ceil(double(piles[i])/double(mid));
            }
            if(ans <= h){
                end = mid - 1;
            }else{
                start =  mid + 1;
            }
        }
       return start;
    }
};
