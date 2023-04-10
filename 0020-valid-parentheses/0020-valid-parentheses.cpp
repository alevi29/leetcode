class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
                case ')':
                    if (stack.empty() || stack.top() != '(') {
                        return false;
                    }
                    stack.pop();
                    break;
                case ']':
                    if (stack.empty() || stack.top() != '[') {
                        return false;
                    }
                    stack.pop();
                    break;
                case '}':
                    if (stack.empty() || stack.top() != '{') {
                        return false;
                    }
                    stack.pop();
                    break;
                default:
                    stack.push(s[i]);
            }
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};