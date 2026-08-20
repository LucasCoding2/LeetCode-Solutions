class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool emptySpace = true;
        for(int i = s.length()-1; i >= 0; i--) {
             if(s[i] == ' ' && !emptySpace) {
                return length;
             }
             if(s[i] != ' ') {
                 emptySpace = false;
                 length++;
             }   
        }
        return length;
    }
};
