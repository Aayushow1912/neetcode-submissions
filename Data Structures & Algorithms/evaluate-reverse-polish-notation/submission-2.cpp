class Solution{
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans;
        int a, b;

        for(string ch: tokens){
            if(ch != "+" && ch != "-" && ch != "*" && ch != "/"){
                s.push(stoi(ch));
            }
            else{
                   a = (s.top());
                   s.pop();
                   b = (s.top()); 
                   s.pop();
                if(ch == "+")  ans = a + b;  
                else if(ch == "-") ans = b - a;  
                else if(ch == "*") ans = a*b;  
                else  ans = b/a;  

                s.push(ans);
            }
        }
         return s.top();
   }
};
