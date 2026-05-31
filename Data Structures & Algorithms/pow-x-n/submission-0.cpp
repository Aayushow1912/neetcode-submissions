class Solution {
public:
    double myPow(double x, int n) {
        double ans = 0.0;
        if(n == 0) return 1;
        if(n > 0){
         ans = x* myPow(x, n - 1);
         n--;
        }
        if(n < 0){
            ans = (1.0 /x) * myPow(x, n + 1);
            n++;
        }
        return ans;
    }
};
