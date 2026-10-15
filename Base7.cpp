class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }

        string base7 = "";
        bool negative = num < 0;
        
        long long n = num;
        if (negative) {
            n = -n;
        }

        while (n > 0) {
            int digit = n % 7;
            base7 = to_string(digit) + base7;
            n /= 7;
        }

        if (negative) {
            base7 = "-" + base7;
        }

        return base7;
    }
};
