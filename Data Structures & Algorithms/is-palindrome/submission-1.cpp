class Solution {
public:
    bool isPalindrome(string s) {
       string comp;
       for(char ch: s){
        if((isalnum(ch))){
            comp += tolower(ch);
        }
       } 
       int l = 0, r = comp.size() - 1;
       while(r > l){
        if(comp[l] != comp[r]){
          return false;  
        }
        l++;
        r--;
       }
       return true;
    }
};
