class Solution {
public:
    bool isValid(string s) {
       std::stack<char> stack; 

       for(int i = 0; i < s.length(); i++) {
           char c = (char) s[i];
           char c2 = 'a';
           if(c == '(' || c == '[' || c == '{') {
               stack.push(c);
           }
           if(!stack.empty() && (c == ')' || c == ']' || c == '}')) {
               c2 = stack.top();
               stack.pop();
           }
           if(c == ')' && '(' != c2) {
               return false;
           } 
           else if (c == ']' && '[' != c2) {
               return false;
           }
           else if (c == '}' && '{' != c2) {
               return false;
           }
       }
       if(stack.size()>0) {
        return false;
       }
       return true;
    }
};
