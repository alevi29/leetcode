class Solution {
public:
    string removeStars(string s) {
        stack <char> stack;
        for (auto i : s) {
            if (i == '*') {
                stack.pop();
            }
            else {
                stack.push(i);
            }
        }
        s.clear();
        while (!stack.empty()) {
            s.push_back(stack.top());
            stack.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};