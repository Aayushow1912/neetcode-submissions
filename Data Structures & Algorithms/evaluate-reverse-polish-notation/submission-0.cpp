class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<long long> st;
     
      for(int i =0; i < tokens.size(); i++){
        
        if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
            st.push(stoll(tokens[i]));
        } 
        else{
            long long b = st.top(); st.pop();
            long long a = st.top(); st.pop();
            long long ans = 0;

            if(tokens[i] == "+") ans = b + a;
           else if(tokens[i] == "-") ans = a - b;
          else  if(tokens[i] == "*") ans = a * b;
          else  if(tokens[i] == "/") ans = a/b;
          st.push(ans);
        }
      }
      return st.top();
    }
};
