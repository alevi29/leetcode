class Solution {
public:
    string interpret(string command) {
        string ret;
        for (int i = 0; i < command.length(); ++i) {
            if (command[i] == 'G') ret.push_back('G');
            else if (command[i] == '(' && command[i+1] == 'a') ret += "al";
            else if (command[i] == '(' && command[i+1] == ')') ret.push_back('o');
        }
        return ret;
    }
};