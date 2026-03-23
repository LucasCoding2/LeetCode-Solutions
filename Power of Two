class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) {
            return false;
        }
        double num = log2(n);
        if(num > floor(num) && num < ceil(num)) {
            return false;
        }
        return true;
    }
};
