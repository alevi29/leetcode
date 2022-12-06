class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        stack <char> stack;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                stack.push('(');
            }
            else {
                if (!stack.empty() && stack.top() == '(') {
                    stack.pop();
                }
                else {
                    stack.push(')');
                }
            }
        }
        return stack.size();
    }
};