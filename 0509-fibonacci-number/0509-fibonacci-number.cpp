class Solution {
public:
    int gen(int t1, int t2, int n) {
        if (n == 2) return t1 + t2;
        return gen(t2, t1+t2, n - 1);
    }
    
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return gen(0, 1, n);
    }
};