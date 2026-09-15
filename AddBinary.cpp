class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        bool extra = false;

        if(a.length() < b.length()) {
            string temp = a;
            a = b;
            b = temp;
        }
        while(b.length() < a.length()) {
            b = "0" + b;
        }
        for(int i = a.length()-1; i >= 0; i--) {
            int count = 0;

            if(a[i] =='1') {
                count++;
            } 
            if(b[i] == '1') {
                count++;
            }
            if(extra) {
                count++;
            }
            if(count > 1) {
                extra = true;
            }
            else {
                extra = false;
            }
            char charToAdd = count % 2 + '0';
            c = charToAdd + c; 
        }
        if(extra) {
            c = "1" + c;
        }
    return c;
    }
};
