class Solution {
public:
    int addDigits(int num) {
       while(num > 9) {
            int num2 = num;
            num = 0;
            while(num2 != 0) {
                num += num2 % 10;
                num2 = num2/10;
            }
       }
       return num;
    }
};
