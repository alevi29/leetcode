class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ret = 0;
        stack <int> stack;
        int n = operations.size();
        for (int i = 0; i < n; ++i) {
            if (operations[i] == "C") {
                stack.pop();
            }
            else if (operations[i] == "D") {
                stack.push(stack.top() * 2);
            }
            else if (operations[i] == "+") {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                int next = first + second;
                stack.push(first);
                stack.push(next);
            }
            else {
                stack.push(stoi(operations[i]));
            }
        }
        while (!stack.empty()) {
            ret += stack.top();
            stack.pop();
        }
        return ret;
    }
};