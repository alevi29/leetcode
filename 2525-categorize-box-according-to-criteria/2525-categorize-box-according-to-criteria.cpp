class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        mass = mass >= 100 ? 1 : -1;
        height = height >= 10000 || width >= 10000 || length >= 10000 || (long long) length * width * height >= pow(10, 9) ? 1 : -1;
        if (mass == height) return mass == 1 ? "Both" : "Neither";
        return mass == 1 ? "Heavy" : "Bulky";
    }
};