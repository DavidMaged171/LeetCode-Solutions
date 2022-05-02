class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) return false;
        
       stack<char> Stack;
        for(auto c: s) {
            if(c == ')' && !Stack.empty() && Stack.top() == '(') {
                Stack.pop();
            }else if(c == '}' && !Stack.empty() && Stack.top() == '{') {
                Stack.pop();
            }else if(c == ']' && !Stack.empty() && Stack.top() == '[') {
                Stack.pop();
            }else{
                Stack.push(c);
            }
        }
        return Stack.empty();
    }
};