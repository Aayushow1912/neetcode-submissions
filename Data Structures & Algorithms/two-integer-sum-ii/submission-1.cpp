class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        long long ans;
        while(right > left){
          ans = numbers[left] + numbers[right];
          if(ans == target){
             return {left + 1, right + 1};
          }
          else if(ans > target){
            right--;
          }
          else{
            left++;
          }
        }
        
    }
};
