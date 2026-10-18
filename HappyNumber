class Solution {
public:
    bool isHappy(int n) {
        std::set<int> seen;

        while (n != 1) {
            if (seen.contains(n)) {
                return false;
            }

            seen.insert(n);

            int happy = 0;
            while (n > 0) {
                int digit = n % 10;
                n /= 10;
                happy += digit * digit;
            }

            n = happy;
        }

        return true;
    }
};
