class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> stack;
        for (auto i : asteroids) {
            bool destroyed = false;
            while (destroyed == false && !stack.empty() && i < 0 && stack.top() > 0) {
                if (i + stack.top() < 0) {
                    stack.pop();
                } 
                else if (i + stack.top() == 0) {
                    stack.pop();
                    destroyed = true;
                }
                else {
                    destroyed = true;
                }
            }
            if (destroyed == false) {
                stack.push(i);
            } 
        }
        asteroids.clear();
        while (!stack.empty()) {
            asteroids.push_back(stack.top());
            stack.pop();
        }
        reverse(asteroids.begin(), asteroids.end());
        return asteroids;
    }
};