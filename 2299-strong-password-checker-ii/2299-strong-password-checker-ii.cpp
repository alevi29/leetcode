class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.length() < 8) return false;
        bool lower = false, upper = false, digit = false, special = false;
        for (auto i : password) {
            if (i >= 'a' && i <= 'z') lower = true;
            else if (i >= 'A' && i <= 'Z') upper = true;
            else if (i >= '0' && i <= '9') digit = true;
            else special = true;
        }
        for (int i = 1; i < password.length(); ++i) {
            if (password[i] == password[i - 1]) return false;
        }
        return lower && upper && digit && special;
    }
};