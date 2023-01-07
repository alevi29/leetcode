class Solution {
public:
    string removeStars(string s) {
        string ret;
        stack <char> stack;
        for (auto i : s) {
            if (i == '*') {
                stack.pop();
            }
            else {
                stack.push(i);
            }
        }
        while (!stack.empty()) {
            ret.push_back(stack.top());
            stack.pop();
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};