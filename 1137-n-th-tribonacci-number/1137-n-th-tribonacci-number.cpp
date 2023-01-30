class Solution {
public:
    int tribonacci(int n) {
        int t1 = 0;
        int t2 = 1;
        int t3 = 1;
        int t = t1 + t2 + t3;
        
        switch (n) {
            case 0:
                return 0;
                break;
            case 1:
                return 1;
                break;
            case 2:
                return 1;
                break;
        }
        
        for (int i = 3; i < n; i++) {
            t1 = t2;
            t2 = t3;
            t3 = t;
            t = t1 + t2 + t3;
        }
        return t;
    }
};